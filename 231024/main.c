#include <stdio.h>

float menu_float(void){

    float ret;
    printf("\nInsira um numero: ");
    scanf("%f", &ret);

    return ret;   
}

char menu_principal(void)
{
    char opcao;
    printf("\nEscolha um opcao: \n");
    printf("+ soma\n");
    printf("- subtracao\n");
    printf("* multiplicacao\n");
    printf("/ divisao\n");
    scanf("%c", &opcao);

    return opcao;
}

int main() {
    char opcao;

    opcao = menu_principal();

    if (opcao == '+' || opcao == '-' || opcao == '*' || opcao == '/')
    {
        printf("\n escolha = %c", opcao);
    } else {
        printf("\n Opcao invalida");
    }

    return 0;
}