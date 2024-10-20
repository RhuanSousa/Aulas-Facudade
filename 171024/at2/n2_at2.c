#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define max_cadastro (100)
#define max_caractere (100)

int main() {

    char nome[max_cadastro][max_caractere];
    char endereco[max_cadastro][max_caractere];
    char consulta[max_cadastro];
    int idade[max_cadastro];
    int matricula[max_cadastro];
    int opcao, pos = 0, i, encontra;

    system("cls");
    do
    {  
        printf("\n1 - Realizar cadastro");
        printf("\n2 - Consultar aluno");
        printf("\n3 - Sair");
        printf("\nEscolha sua opcao: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao)
        {
        case 1:
            if (pos >= max_cadastro)
            {
                printf("Numero maximo de cadastro atingido!!");
                break;
            }
            
            printf("\nMATRICULA: %d\n", pos);

            printf("NOME COMPLETO: ");
            scanf("%99[^\n]s", nome[pos]);

            printf("IDADE: ");
            scanf("%d", &idade[pos]);
            fflush(stdin);

            printf("ENDERECO COMPLETO: ");
            scanf("%99[^\n]s", endereco[pos]);

            matricula[pos] = pos;
            pos++;

            printf("\nCADASTRO CONCLUIDO!!");
            printf("\n--------------------------------\n");

            break;
        case 2:
            
            printf("\nDigite o nome do aluno que deseja consultar: ");
            scanf("%99[^\n]s", consulta);

            for (i = 0; i < pos; i++)
            {
                encontra = strcmp(consulta, nome[i]);

                if (encontra == 0)
                {
                    printf("\nMatricula: %d", matricula[i]);
                    printf("\nIdade: %d", idade[i]);
                    printf("\nEndereco: %s\n", endereco[i]);
                    printf("\n--------------------------------\n");
                    break;
                }
            }

            if (encontra != 0)
            {
                printf("\nAluno nao cadastrado\n");
            }            
            break;
        case 3:
            printf("\nSaindo...\n");
            break;
        default:
            if (opcao > 3 || opcao <= 0)
            {
                printf("\nNumero digitado invalido!!\n"); 
            }
            break;
        }
    } while (opcao != 3);
    
    system("pause");
    return 0;
}