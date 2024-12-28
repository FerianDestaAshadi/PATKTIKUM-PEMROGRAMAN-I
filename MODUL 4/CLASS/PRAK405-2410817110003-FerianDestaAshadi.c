#include <stdio.h>

int main() {
    int n;
    int kelipatan; int total = 0;
    int baris_total = 0;


    scanf("%d", &n); scanf("%d", &kelipatan);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) { 
            baris_total += j * kelipatan; 
            printf("(%d * %d)", j, kelipatan);

            if (j < i) {
                printf(" + ");
            }
        }
        total += baris_total;
        printf(" = %d\n", baris_total);
    }
    printf("%d\n", total);

    return 0;
}

