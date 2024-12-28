import math
alas = 5
tinggi = 12

sisi_miring = math.sqrt((tinggi*tinggi)+(alas*alas))

keliling = tinggi + alas + sisi_miring 

luas = 0.5 * alas * tinggi

print("Diketahui :")
print("Alas = ", alas,"cm")
print("Tinggi = ", tinggi,"cm")
print("\n")
print("Jawab :")
print("Sisi A =",tinggi,"cm")
print(f"sisi B = {sisi_miring:.0f} cm")
print("Sisi C =",alas,"cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm")
