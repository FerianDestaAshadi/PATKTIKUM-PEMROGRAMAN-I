#include <stdio.h>
int reverse(int angka) { 
    int balik = 0, sisa;

    while (angka != 0) { 
        sisa = angka % 10;
        balik = balik * 10 + sisa; 
        angka /= 10;
    }
    return balik;
}

int main () {
    int A, B;
    scanf("%d %d",&A,&B);
    A = reverse(A);
    B = reverse(B); 
    int C = A+B;
    printf("%d",reverse(C));
    return 0;
}
