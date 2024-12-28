a = int(input("Bilangan = "))
if a==0:
    print("Nol")
elif a>=1 and a<=9:
    print("Satuan")
elif a== 10 or a>=20 and a<=99:
    print("Puluhan")
elif a>=11 and a<=19:
    print("Belasan")
else :
    print("Anda Menginput Melebihi Limit Bilangan")