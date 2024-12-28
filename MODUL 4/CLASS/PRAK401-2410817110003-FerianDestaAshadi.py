kelipatan, simbol = input().split() 
kelipatan = int(kelipatan)
i = 1

while i <= 50:
    if i % kelipatan == 0: 
        print(simbol, end=" ")
    else:
        print(i, end=" ")
    i += 1