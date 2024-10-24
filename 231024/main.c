#include <stdio.h>

float menu_float(void){

    float res;
    printf("\nInsira um numero: ");
    scanf("%f", &res);

    return res;   
}

char menu_principal(void)
{
    while (1)
    {
        char opcao;
        printf("\nEscolha um opcao: \n");
        printf("+ soma\n");
        printf("- subtracao\n");
        printf("* multiplicacao\n");
        printf("/ divisao\n");
        scanf("%c", &opcao);

        
        if (opcao == '+' || opcao == '-' || opcao == '*' || opcao == '/')
        {
            return opcao;
        } 

        printf("\nOperacao invalida!\n");
    }
}

float soma(float parcela1, float parcela2) {

    float resultado = parcela1 + parcela2;

    return resultado;
}

int main() {
    char opcao;
    float res;
    float num1, num2;

    opcao = menu_principal();

    num1 = menu_float();
    num2 = menu_float();


    printf("\nEscolha = %c", opcao);

    switch (opcao)
    {
    case '+':
        res = soma(num1, num2);
        break;
    case '-':
        break;
    case '*':
        break;
    case '/':
        break;
    default:
        break;
    }

    printf("\n %.1f %c %.1f = %.1f", num1, opcao, num2, res);

    return 0;
}