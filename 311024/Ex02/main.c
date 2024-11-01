#include <stdio.h>

void maior_menor(int *v, int *maior, int *menor) {
    int i;

    *maior = v[0];
    *menor = v[0];

    for (i = 0; i < 5; i++)
    {
        if (v[i] < *menor)
        {
            *menor = v[i];
        }

        if (v[i] > *maior)
        {
            *maior = v[i];
        }
        
    }

}

int main(void) {
    
    int vetor[5] = {12, 56, 23, 7, 49};
    int ma, me;

    maior_menor(vetor, &ma, &me);

    printf("\nMaior valor: %d", ma);
    printf("\nMenor valor: %d", me);

    return 0;
}