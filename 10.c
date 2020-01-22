#include <stdio.h>
int main(){
    char nome [200];
    int menu = 1;

    printf("Nome\n");
    scanf(" %s", &nome);

    do
    {
        printf("%s\n",nome);
        menu = menu + 1;

    } while ( menu <=10);
    
        

    

    
}

