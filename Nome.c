#include <stdio.h>

int main(){
    char nome [50];




    printf("Intreduzir nome\n");
    scanf(" %s",&nome);
    for (int i = 0; i <= 3; i++)
    {
        printf("%c \n",nome[i]);

    }
    
    return 0;  

}