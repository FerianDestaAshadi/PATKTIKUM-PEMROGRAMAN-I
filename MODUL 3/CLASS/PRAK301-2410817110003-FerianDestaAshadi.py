a, b, c =map(int, input("").split())

if a<b and b<c:
    print(a, b, c)

elif b<a and a<c:
    print(b, a, c)

elif b<c and c<a:
    print(b, c, a)

elif c<b and b<a:
    print(c, b, a)

elif c<a and a<b:
    print(c, a, b)

else: print(a, c, b)
