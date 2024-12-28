def Biodata(tahunlahir, nama, asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahunlahir 
    print("\nPerkenalkan Nama Saya :",nama ) 
    print("Umur Saya :", umur)
    print("Saya Adalah Angkatan :", tahun_sekarang) 
    print("Asal Saya dari :", asal)

tahunlahir = int(input()) 
nama = input()
asal = input()
Biodata(tahunlahir, nama, asal)