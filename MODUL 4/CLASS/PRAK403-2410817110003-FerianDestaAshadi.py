bil1, bil2 = input().split()

bil1 = int(bil1) 
bil2 = int(bil2)

if bil1 <= bil2:
    i, ii = bil1, bil2
    while i <= bil2 and ii >= bil1: 
        print(f"{i} {ii}", end="") 
        if i < bil2 or ii > bil1:
            print(" - ", end="")
        i += 1
        ii -= 1

else:
    i, ii = bil1, bil2
    while i >= bil2 and ii <= bil1: 
        print(f"{i} {ii}", end="") 
        if i > bil2 or ii < bil1:
            print(" - ", end="")
        i -= 1
        ii += 1