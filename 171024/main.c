#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define qtd_cadastro (100)

int main(void) {

    char nome[qtd_cadastro][50];
    char endereco[qtd_cadastro][50];
    int idade[qtd_cadastro];
    int i, resp;

    printf("\n--------MATRICULA ALUNOS--------\n");


    for (i = 0; i < qtd_cadastro; i++)
    {
        printf("\nMatricula: %d\n", i);

        printf("Nome do aluno: ");
        fflush(stdin);
        fgets(nome[i], 50, stdin);
        

        printf("Idade: ");
        scanf("%d", &idade[i]);
        getchar();

        printf("Endereco: ");
        fflush(stdin);
        fgets(endereco[i], 50, stdin);

        printf("\n1 - Realizar outro cadastro");
        printf("\n2 - Realizar consulta pelo nome");
        printf("\n3 - Sair\n");
        scanf("%d", &resp);

        switch (resp)
        {
        case 1:
            continue;
            break;
        case 2:
            break;
        case 3:
            printf("Saindo...\n");
            return 0;
        default:
            printf("Opção Invalida!\n");
            break;
        }
    
    }

    system("pause");
    return 0;
}