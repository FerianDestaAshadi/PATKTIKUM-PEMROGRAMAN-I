#include <stdio.h>

int main() {

    int detik;
    int hari;
    int jam;
    int menit;
    int sisa_detik;

    scanf("%d", &detik);

    
    if (detik >= 86400) { 
        hari = detik / 86400;
        sisa_detik = detik % 86400;
        jam = sisa_detik / 3600;
        sisa_detik %= 3600;
        menit = sisa_detik / 60;
        detik = sisa_detik % 60;
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    } 

    else if (detik >= 3600) { 
        jam = detik / 3600;
        sisa_detik = detik % 3600;
        menit = sisa_detik / 60;
        detik = sisa_detik % 60;
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    } 
    
    else if (detik >= 60) { 
        menit = detik / 60;
        detik = detik % 60;
        printf("00:%02d:%02d\n", menit, detik);
    } 
    
    else { 
        printf("00:00:%02d\n", detik);
    }

    return 0;
}
