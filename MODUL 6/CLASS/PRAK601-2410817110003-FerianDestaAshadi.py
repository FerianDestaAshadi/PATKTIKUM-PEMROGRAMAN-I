baris, kolom = map(int, input("").split())

matriks = []
angka = list(map(int, input().split()))

print("\n")

index = 0
for i in range(baris):
    row = []
    for j in range(kolom):
        row.append(angka[index])
        index += 1
    matriks.append(row)
for row in matriks:
    print(" ".join(map(str, row)))