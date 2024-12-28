#include <stdio.h> 

int main () {
    int batas; 
    int i = 1;
    
    scanf("%d", &batas); 
    
    while (i <= batas) {
        if (i % 2 != 0) {
            printf("%d ", i);
        } 
    i++;
    }
    printf("\n");

    while (batas >= 1) {
        if (batas % 2 == 0) { 
            printf ("%d ", batas);
        }
    batas--;
    }

    return 0;
}