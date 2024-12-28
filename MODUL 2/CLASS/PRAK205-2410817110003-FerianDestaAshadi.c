#include <stdio.h>
#include <math.h>
int main(){

    int tinggi;
    int sisi_miring;
    int alas;
    int keliling;
    int luas;

    scanf("%d", &tinggi);
    scanf("%d", &sisi_miring);

    alas = sqrt((sisi_miring * sisi_miring ) - (tinggi * tinggi));
    luas = 0.5 * alas * tinggi;
    keliling = tinggi + alas + sisi_miring;

    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2\n", luas);

    return 0;
}