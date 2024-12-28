#include <stdio.h> 
int main () {

    int bil1; 
    int bil2; 
    int i; 
    int ii;

    scanf("%d %d", &bil1, &bil2);

    for ( i = bil1, ii = bil2; i <= bil2 && ii >= bil1; i++, ii--){ 
        printf("%d %d", i, ii);
        if ( i < bil2 || ii > bil1) { 
            printf(" - ");
        }
    }
    for ( i = bil1, ii = bil2; i >= bil2 && ii <= bil1; i--, ii++){ 
        printf("%d %d", i, ii);
        if (i > bil2 || ii < bil1) { 
            printf(" - ");
        }
    }
    return 0;
}