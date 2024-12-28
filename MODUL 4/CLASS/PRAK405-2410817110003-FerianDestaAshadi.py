n, kelipatan = input("").split() 
n = int(n)
kelipatan = int(kelipatan) 

total = 0

for i in range(1, n + 1): 
    baris_total = 0

    for j in range(1, i + 1): 
        baris_total += j * kelipatan
        print(f"({j} * {kelipatan})", end="") 
        if j < i:
            print(" + ", end="") 
    total += baris_total 
    print(f" = {baris_total}")
print(total)