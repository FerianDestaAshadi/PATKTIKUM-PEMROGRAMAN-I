kode = input("")
pesan = input("")

if len(kode) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    star = 0
    hash_count = 0
    
    result = []
    for k, p in zip(kode, pesan):
        if k == ' ' and p == ' ':
            result.append(' ')
        elif k == ' ' or p == ' ':
            result.append('#')
            hash_count += 1
        elif k == p:
            result.append('*')
            star += 1
        else:
            result.append('#')
            hash_count += 1
    print("".join(result))
    print(f"* = {star}")
    print(f"# = {hash_count}")
    if star >= hash_count:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")