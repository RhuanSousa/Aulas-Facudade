#include <stdio.h>

void div(int divisor, int dividendo, int *quociente, int *resto) {

    if (quociente != NULL)
    {
        *quociente = dividendo/divisor;
    }
    
    if (resto != NULL)
    {
        *resto = dividendo % divisor;
    }

}

// void max_e_min(int *v, int quantidade, int *max, *min) {}


int main(void) {

    int v1, v2;
    int q, r;

    printf("\nDivite o valor do divisor: ");
    scanf("%d", &v1);

    printf("\nDigite um valor para o dividendo: ");
    scanf("%d", &v2);

    div(v1, v2, &q, &r);


    printf("\nValor do quociente: %d", q);
    printf("\nValor do resto: %d", r);

    return 0;
}