#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_alunos (100)
#define max_caractere (100)

int main(void) {

    char nome[max_alunos][max_caractere];
    char endereco[max_alunos][max_caractere];
    char consulta[max_caractere];
    int matricula[max_caractere];
    int idade[max_alunos];
    int opcao, pos = 0;

    do
    {   
        printf("\n1 - Realizar cadastro");
        printf("\n2 - Realizar consulta");
        printf("\n3 - Sair\n");
        printf("\nEscolha uma opcao: ");
        fflush(stdin);
        scanf("%d", &opcao);

        if ((opcao > 3) || (opcao < 0))
        {
            printf("\nNumero digitado invalido!\n");
            continue;
        }

        if (opcao == 1)
        {
            printf("\nMATRICULA: %d\n", pos);
            printf("NOME COMPLETO: ");
            fflush(stdin);
            fgets(nome[pos], max_caractere, stdin);

            printf("ENDERECO: ");
            fflush(stdin);
            fgets(endereco[pos], max_caractere, stdin);

            printf("IDADE: ");
            fflush(stdin);
            scanf("%d", &idade[pos]);

            matricula[max_alunos] = pos;
            pos++;
            
        } else if (opcao == 2)
        {
            printf("Digite o nome que deseja consultar: ");
            fgets(consulta, max_caractere, stdin);

            if (strcmp(consulta, nome[max_alunos]) == 0)
            {
                printf("Matricula: %d", matricula[max_alunos])
            }
            
        }
        

    } while (opcao != 3);
    

    system("pause");
    return 0;
}