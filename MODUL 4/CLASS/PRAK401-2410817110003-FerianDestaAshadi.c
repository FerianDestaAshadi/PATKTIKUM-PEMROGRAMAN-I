#include <stdio.h> 
int main () {

    int i = 1;
    int kelipatan; 
    char simbol[5];

    scanf("%d", &kelipatan); 
    scanf("%s", simbol);

    while (i<=50) {
        if (i % kelipatan == 0){ 
            printf("%s ", simbol); 
            i++;
        }
        else {
        printf("%d ", i); i++;
        }

    }
    return 0;
}