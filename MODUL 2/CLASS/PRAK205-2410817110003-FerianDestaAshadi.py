import math

angka = []
while True:
    line = input()
    if not line:
        break
    angka.extend(line.split())

angka = list(map(float, angka))
tinggi, sisi_miring = angka

alas = math.sqrt((sisi_miring*sisi_miring) - (tinggi*tinggi))
luas = 0.5 * alas * tinggi
keliling = tinggi + alas + sisi_miring

print (f"Alas = {alas:.0f} cm",)
print (f"Tinggi = {tinggi:.0f} cm",)
print (f"Keliling = {keliling:.0f} cm",)
print (f"Luas = {luas:.0f} cm^2",)