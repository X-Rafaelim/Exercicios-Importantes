#include <stdio.h>

int main(){
       char name [140];
       int letras,i;


        printf("nome\n");
        scanf(" %s", name);
        letras = strlen(name);
        for ( i = 1; i <= letras; i++)
        {
            printf(" %s", name);
        }

        return 0;
        

        

}