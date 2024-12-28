def reverse (angka): 
    balik = 0
    while angka != 0: 
        sisa = angka % 10
        balik = balik * 10 + sisa 
        angka //= 10
    return balik

A, B = map(int, input().split())

A = reverse(A)
B = reverse(B)

C = A + B
print(reverse(C))