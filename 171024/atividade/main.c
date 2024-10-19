#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define max_cadastro (100)
#define max_caractere (100)

int main() {

    char nome[max_cadastro][max_caractere];
    char endereco[max_cadastro][max_caractere];
    char nome_cons[max_caractere];
    int matricula[max_cadastro];
    int idade[max_cadastro];
    int opcao, status = 1, pos = 0, i, consulta;

    system("cls");
    printf("\n-------------------------------------");
    printf("\n           CADASTRO ALUNOS           ");
    printf("\n-------------------------------------");

    while (status)
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

            if (pos >= max_cadastro) {
                printf("Limite de cadastros atingido!\n");
                break;
            }

            printf("\nMATRICULA:  %d", pos);

            printf("\nNOME COMPLETO: ");
            fgets(nome[pos], max_caractere, stdin);

            printf("ENDERECO COMPLETO: ");
            fgets(endereco[pos], max_caractere, stdin);

            printf("IDADE: ");
            scanf("%d", &idade[pos]);
            
            printf("\nCADASTRO CONCLUIDO!");

            matricula[pos] = pos;
            pos++;
            Sleep(2500);
            system("cls");
            break;
        case 2:
            
            printf("\nDigite o nome do(a) aluno(a) que dejesa consultar: ");
            fgets(nome_cons, max_caractere, stdin);

            for (i = 0; i < pos; i++)
            {
                consulta = strcmp(nome_cons, nome[i]);

                if (consulta == 0) {
                    printf("\nALUNO ENCONTRADO!!\n");
                    printf("\nMATRICULA: %d\n", matricula[i]);
                    printf("ENDERECO: %s", endereco[i]);
                    printf("IDADE: %d\n", idade[i]);
                    break;
                }  
            } 
            
            if(consulta != 0) {
                printf("\nPessoa nao cadastrada.\n");
            }
            
            Sleep(2000);
            system("cls");
            break;
        case 3:
            status = 0;
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nNumero digitado invalido!!\n");
            Sleep(1200);
            system("cls");
            continue;
            break;
        }
    }

    Sleep(1200);
    system("cls");
    return 0;
}