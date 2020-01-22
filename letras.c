#include <stdio.h>

int main(){
    char name [200];
    int i;
    int letras;

    for ( i = 0; i <=4 ; i++)
    {
        printf("nome\n");
        scanf(" %c", name);
        letras = strlen(name);
        printf(" tem %d " ,letras);
    }
    return 0;
}