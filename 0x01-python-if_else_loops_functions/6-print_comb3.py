#!/usr/bin/python3

comb = ""
for i in range(10):
    for j in range(10):
        if comb.find(str(j) + str(i)) == -1:
            comb += (str(i) + str(j))
            comb += ", "

# remove last space and comma
comb = comb[:-2]
print("{}".format(comb))
