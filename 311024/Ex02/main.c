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

#define max (5)

int main(void) {
    
    int vetor[max];
    int ma, me, i;

    for (i = 0; i < max; i++)
    {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    maior_menor(vetor, &ma, &me);

    printf("\nMaior valor: %d", ma);
    printf("\nMenor valor: %d", me);

    return 0;
}