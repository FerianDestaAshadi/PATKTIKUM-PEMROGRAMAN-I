#include <stdio.h>
int main(){
    int a;
    printf("Masukkan Bilangan: ");
    scanf("%d", &a);
    if (a==0){
        printf("Nol");
    }
    else if (a>=1 && a<=9){
        printf("Satuan");
    }
    else if (a>=11 && a<=19){
        printf("Belasan");
    }
    else if (a==10 || a>=20 && a<=99){
        printf("Puluhan");
    }
    else {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
}