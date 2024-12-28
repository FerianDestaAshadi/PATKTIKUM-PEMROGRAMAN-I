#include <stdio.h>

int main () {

    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;
    int hasil_bagi_a_b, hasil_bagi_x_y, jumlah_hasil_bagi;

    hasil_bagi_a_b = a % b;
    hasil_bagi_x_y = x % y;

    jumlah_hasil_bagi = hasil_bagi_a_b + hasil_bagi_x_y;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", jumlah_hasil_bagi );

}