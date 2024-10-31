#include <stdio.h>

int menu_int(void){

    int res;
    printf("\nInsira um numero: ");
    scanf("%d", &res);

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

int soma(int parcela1, int parcela2) {

    int resultado = parcela1 + parcela2;

    return resultado;
}

int sub(int parcela1, int parcela2) {

    int resultado = parcela1 - parcela2;

    return resultado;
}

int mult(int parcela1, int parcela2) {

    int resultado = parcela1 * parcela2;

    return resultado;
}

int div(int parcela1, int parcela2) {

    int resultado = parcela1 / parcela2;

    return resultado;
}

int main() {
    char opcao;
    int res;
    int num1, num2;

    opcao = menu_principal();

    num1 = menu_int();
    num2 = menu_int();


    printf("\nEscolha = %c", opcao);

    switch (opcao)
    {
    case '+':
        res = soma(num1, num2);
        break;
    case '-':
        res = sub(num1, num2);
        break;
    case '*':
        res = mult(num1, num2);
        break;
    case '/':
        res = div(num1, num2);
        break;
    default:
        printf("Numero invalido!");
        break;
    }

    printf("\n%d %c %d = %d", num1, opcao, num2, res);

    return 0;
}