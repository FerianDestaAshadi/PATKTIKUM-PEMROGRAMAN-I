#include <stdio.h>

int main () {

    int a = 4;
    int b = 5;
    int c = 7;
    int harga = 85000;
    int keliling;
    int total_harga;

    keliling = a + b + c;
    total_harga = keliling * 85000;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berurut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah per Meter adalah %d\n", harga);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", total_harga);
}