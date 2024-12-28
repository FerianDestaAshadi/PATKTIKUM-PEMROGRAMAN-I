angka = []
while True:
    line = input()
    if not line:
        break
    angka.extend(line.split())

angka = list(map(float, angka))

a, b, i, j, x, y = angka

hasil = (((a - b) * i) / j) - (x + y)
print(f"{hasil:.3f}")