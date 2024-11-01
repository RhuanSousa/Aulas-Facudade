#include <stdio.h>

void div(int dividendo, int divisor, int *quociente, int *resto){

    if (quociente != NULL)
    {
        *quociente = dividendo/divisor;
    }
    
    if (resto != NULL)
    {
        *resto = dividendo % divisor;
    }

}

int main(void) {
    int num1, num2;
    int q, r;

    printf("Digite um valor para o dividendo: ");
    scanf("%d", &num1);

    printf("Digite um valor para o diviso: ");
    scanf("%d", &num2);

    div(num1, num2, &q, &r);

    printf("%d / %d e igual a %d e resto %d", num1, num2, q, r);
    return 0;
}