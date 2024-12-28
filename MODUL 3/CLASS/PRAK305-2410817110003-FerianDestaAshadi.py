detik = int(input())

if detik >=86400:
    hari = detik // 86400
    sisa_detik = detik % 86400
    jam = sisa_detik // 3600
    sisa_detik %= 3600
    menit = sisa_detik // 60
    detik = sisa_detik % 60
    print(f"{hari} hari {jam:02}:{menit:02}:{detik:02}")

elif detik >= 3600:
    jam = detik // 3600
    sisa_detik = detik % 3600
    menit = sisa_detik // 60
    detik = sisa_detik % 60
    print(f"{jam:02}:{menit:02}:{detik:02}")

elif detik >= 60:
    menit = detik // 60
    detik = detik % 60
    print(f"00:{menit:02}:{detik:02}")

else: 
    print(f"00:00:{detik:02}")
