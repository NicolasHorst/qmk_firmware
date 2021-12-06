from string import ascii_lowercase

layer3keys = list(ascii_lowercase)
layer3keys.append("(")
layer3keys.append(";")
layer3keys.append("'")
layer3keys.append("-")
layer3keys.append(".")
layer3keys.append(",")

layer4keys = ["y", "h", "q", "t"]

def create_key(key):
    if key == "(":
        key = "UE"
    elif key == ";":
        key = "OE"
    elif key == "'":
        key = "AE"
    elif key == ".":
        key = "DOT"
    elif key == ",":
        key = "COMM"
    elif key == "-":
        key = "MINUS"
    else:
        key = key.upper()
    return key

output = "enum custom_keycodes {\n"
for n, c in enumerate(layer3keys):
    if n == 0:
        output += "L3_"+create_key(c)+" = SAFE_RANGE,\n"
    else:
        output += "L3_"+create_key(c)+",\n"
for n, c in enumerate(layer4keys):
        output += "L4_"+create_key(c)+",\n"
output += "};\n\n"

output += \
    "bool process_record_user(uint16_t keycode, keyrecord_t *record) {\n" + \
    "    switch (keycode) {\n"
for c in layer3keys:
    output += \
        "case L3_{}:\n".format(create_key(c)) +\
        "   if (record->event.pressed) {{SEND_STRING(SS_DOWN(X_CAPSLOCK) \"{}\" SS_UP(X_CAPSLOCK));}}\n".format(c) +\
        "   else {}\n" +\
        "break;\n"
for c in layer4keys:
    output += \
        "case L4_{}:\n".format(create_key(c)) +\
        "   if (record->event.pressed) {{SEND_STRING(SS_DOWN(X_RCMD) \"{}\" SS_UP(X_RCMD));}}\n".format(c) +\
        "   else {}\n" +\
        "break;\n"
output += \
    "    }\n" +\
    "    return true;\n" +\
    "};\n"

with open("remap_for_neo.h", "w") as f:
    f.write(output)