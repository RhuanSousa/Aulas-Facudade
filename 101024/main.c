#include <string.h>
#include <stdio.h>

int main(void) {

    char original[] = "Universidade Catolica de Brasilia";
    char copia[34];
    int pos = 0;

    /*
    while (original[pos] != '\0')
    {
        copia[pos] = original[pos];
        pos++;
    }
    */
    

    copia[pos] = '\0';

    strncpy(copia, original, sizeof(copia));

    printf("\n copia: %s", copia);
    
}
