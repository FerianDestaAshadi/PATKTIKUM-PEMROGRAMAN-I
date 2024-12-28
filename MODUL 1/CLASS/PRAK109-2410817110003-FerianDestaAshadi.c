#include <stdio.h>

int main () {

    double jumlah_pasukan_yuzhong = 958.730;
    int jumlah_pasukan_black_dragon = 958730;
    int total_pasukan_padepokan = 5;
    int jumlah_pasukan_yang_harus_dikalahkan;

    jumlah_pasukan_yang_harus_dikalahkan = jumlah_pasukan_black_dragon / total_pasukan_padepokan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %.3f\n", jumlah_pasukan_yuzhong);
    printf("Jumlah pahlawaan = %d\n", total_pasukan_padepokan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", jumlah_pasukan_yang_harus_dikalahkan);
}
