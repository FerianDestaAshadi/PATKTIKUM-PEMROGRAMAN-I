#include <stdio.h> 
int main () {
    int pilihan;
    float nilai_pertama; 
    float nilai_kedua; 
    float hasil;

    do {
        printf("\nPilih program\n"); 
        printf("1. Penjumlahan\n"); 
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n"); 
        printf("5. Exit\n");
        printf("Masukkan Pilihan : "); 
        scanf("%d", &pilihan);

        switch (pilihan) { 
            case 1:
                printf("Masukkan nilai pertama : "); 
                scanf("%f", &nilai_pertama); 
                printf("Masukkan nilai kedua : "); 
                scanf("%f", &nilai_kedua);

                hasil = nilai_pertama + nilai_kedua;

                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
            break;

            case 2:
                printf("Masukkan nilai pertama : "); 
                scanf("%f", &nilai_pertama); 
                printf("Masukkan nilai kedua : "); 
                scanf("%f", &nilai_kedua);

                hasil = nilai_pertama - nilai_kedua;

                printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
            break;

            case 3:
                printf("Masukkan nilai pertama : "); 
                scanf("%f", &nilai_pertama); 
                printf("Masukkan nilai kedua : "); 
                scanf("%f", &nilai_kedua);

                hasil = nilai_pertama * nilai_kedua;

                printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
            break;

            case 4:
                printf("Masukkan nilai pertama : "); 
                scanf("%f", &nilai_pertama); 
                printf("Masukkan nilai kedua : "); 
                scanf("%f", &nilai_kedua);
                hasil = nilai_pertama / nilai_kedua;

                printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
            break; 

            case 5:
            printf("Terimakasih, telah menggunakan kalkulator Ferian Desta Ashadi\n");
            break;

        default:
            printf("Input anda salah, silahkan coba lagi\n"); break;
        }
    }
    while (pilihan != 5); 

    return 0;
}