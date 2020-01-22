#include <stdio.h>

int main(){
    char nome [50];
    int i;




    printf("Intreduzir nome\n");
    scanf(" %s",&nome);

    for ( i = 0; i <= 3; i++)
    {
        printf("%c \n",nome[i]);
        i = i + 1;

    }
    
    return 0;  

}