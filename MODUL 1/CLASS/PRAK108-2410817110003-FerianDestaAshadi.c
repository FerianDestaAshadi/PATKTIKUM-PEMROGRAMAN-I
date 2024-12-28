#include <stdio.h>

int main () {
    
    int putaran = 5;
    int jarak_tempuh = 14;
    double jarak_total = 14, pi = 3.14;
    double keliling_satu_putaran, jari_jari;

    keliling_satu_putaran = jarak_total / putaran;
    jari_jari = keliling_satu_putaran / (2 * pi);
    
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n", jarak_tempuh);
    printf("\n");
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jari_jari);
}
