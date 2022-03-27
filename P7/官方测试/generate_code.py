print("ori $1, $0, 0x1234")
for i in range(20):
    print("sw $1, {}($0)".format(int(4 * i)))
