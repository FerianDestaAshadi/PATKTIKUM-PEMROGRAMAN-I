#include <stdio.h>
int main(){
    char nama   [30];
    char nim    [30];
    char kelas  [30];
    char ttl    [30];
    char alamat [30];
    char hobby  [30];
    char hp     [30];

    printf("Nama                  : ");
    fgets(nama, sizeof(nama), stdin);

    printf("Nim                   : ");
    fgets(nim, sizeof(nim), stdin);

    printf("Kelas Pararel         : ");
    fgets(kelas, sizeof(kelas), stdin);
    
    printf("Tempat/Tanggal Lahir  : ");
    fgets(ttl, sizeof(ttl), stdin);

    printf("Alamat                : ");
    fgets(alamat, sizeof(alamat), stdin);

    printf("Hobby                 : ");
    fgets(hobby, sizeof(hobby), stdin);

    printf("No. HP                : ");
    fgets(hp, sizeof(hp), stdin);

    printf("\n");
    printf("Nama                  : %s", nama);
    printf("Nim                   : %s", nim);
    printf("Kelas Pararel         : %s", kelas);
    printf("Tempat/Tanggal Lahir  : %s", ttl);
    printf("Alamat                : %s", alamat);
    printf("Hobby                 : %s", hobby);
    printf("No. HP                : %s", hp);

    return 0;
}