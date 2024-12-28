import math

def hitung (nilai1, nilai2):
    return math.sqrt((nilai2 - nilai1) * (nilai2 - nilai1))

def mutlak(angka):
    if angka < 0:
        return -angka 
    return angka

a, c, b, d = map(int, input().split())
 
hasil = hitung(a, b) + hitung(c, d)

print(f"{mutlak(hasil):.0f}")