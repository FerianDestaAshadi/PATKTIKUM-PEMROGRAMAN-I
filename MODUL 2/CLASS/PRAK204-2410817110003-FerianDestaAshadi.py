import math

banyak_variable = 2 
inputs = []

while len(inputs) < banyak_variable: 
    line = input()
    
    new_line = line.split()

    for value in new_line: 
        inputs.append(float(value))
        
jari_jari, tinggi_bejana = inputs 

PI = 22.0/7.0

volume = PI * (pow(jari_jari,2)) * tinggi_bejana 
luas  =  2  *  PI  *  jari_jari  *  (jari_jari  + tinggi_bejana) 
keliling = 2 * PI * jari_jari

print(f"Volume = {volume:.2f}")