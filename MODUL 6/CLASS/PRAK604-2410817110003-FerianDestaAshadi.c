#include <stdio.h>
#include <string.h>
int main() {
    char kode[101], pesan[101];
    int star = 0, hash = 0;

    printf("");
    fgets(kode, sizeof(kode), stdin);
    printf("");
    fgets(pesan, sizeof(pesan), stdin);

    kode[strcspn(kode, "\n")] = '\0';
    pesan[strcspn(pesan, "\n")] = '\0';

    if (strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }
    for (int i = 0; i < strlen(kode); i++) {
        if (kode[i] == ' ' && pesan[i] == ' ') {
            printf(" ");
        } else if (kode[i] == ' ' || pesan[i] == ' ') {
            printf("#");
            hash++;
        } else if (kode[i] == pesan[i]) {
            printf("*");
            star++;
        } else {
            printf("#");
            hash++;
        }
    }
    printf("\n");
    printf("* = %d\n", star);
    printf("# = %d\n", hash);

    if (star >= hash) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }
    return 0;
}