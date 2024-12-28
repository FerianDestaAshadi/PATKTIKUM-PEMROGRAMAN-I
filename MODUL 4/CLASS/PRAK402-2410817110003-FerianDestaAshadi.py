batas = int(input()) 
i = 1

while i <= batas:
    if i % 2 != 0:
        print(i, end=" ") 
    i += 1

print("")

while batas >= 1:
    if batas % 2 == 0: 
        print(batas, end=" ")
    batas -= 1