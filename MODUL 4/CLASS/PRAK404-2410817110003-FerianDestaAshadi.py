while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    try:
        program = int(input("Masukkan Pilihan: "))
    except ValueError:
        print("Input anda salah, silahkan coba lagi\n")
        continue
    if program == 5:
        print("Terimakasih, telah menggunakan kalkulator Ferian Desta Ashadi")
        break
    
    if program not in [1, 2, 3, 4]:
        print("Input anda salah, silahkan coba lagi\n")
        continue
    try:
        angka1 = float(input("Masukkan nilai pertama: "))
        angka2 = float(input("Masukkan nilai kedua: "))
    except ValueError:
        print("Input anda salah, silahkan coba lagi\n")
        continue
    if program == 1:
        hasil = angka1 + angka2
        hitungan = "Penjumlahan"
    elif program == 2:
        hasil = angka1 - angka2
        hitungan = "Pengurangan"
    elif program == 3:
        hasil = angka1 * angka2
        hitungan = "Perkalian"
    elif program == 4:
        hasil = angka1 / angka2
        hitungan = "Pembagian"
    print(f"Hasil {hitungan} antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}\n")