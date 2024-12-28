def maksimal (a, b): 
    if a > b:
        return a 
    else:
        return b
def minimal(a, b): 
    if a < b:
        return a 
    else:
        return b
    
batas = 0
maks = -100000
minim = 100000

bilangan = int(input())
list_nilai = list(map(int, input().split()))

while batas < bilangan:
    nilai = list_nilai[batas] 
    maks = maksimal(maks, nilai) 
    minim = minimal(minim, nilai) 
    batas += 1
    
print(maks, minim)