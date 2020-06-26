## Given a string,S , of length N that is indexed from 0 to N-1, print its even-indexed and odd-indexed characters as 2 space-separated strings on a single line.

t = input()
for i in range(t):
    s = raw_input()
    print s[::2], s[1::2]
