#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char str1[] = "uva";
    char str2[4];
    int ok;

    printf("Adivinha a fruta: ");
    fgets(str2, 4, stdin);
    fflush(stdin);


    ok = strcmp(str1, str2);

    if (ok == 0)
    {
        printf("Voce acertou!\n");
    } else {
        printf("Voce errou!\n");
    }
    
    
    return 0;
}