#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define max_cadastro (100)
#define max_caractere (100)

int main() {

    char nome[max_cadastro][max_caractere];
    char endereco[max_cadastro][max_caractere];
    char consulta[max_caractere];
    int matricula[max_cadastro];
    int idade[max_cadastro];
    int opcao, status = 1, cont = 0, i, encontrar;

    system("cls");
    while (status)
    {
        printf("\n1 - Realizar cadastro");
        printf("\n2 - Consultar pessoa");
        printf("\n3 - Sair");
        printf("\nEscolha sua opcao: ");
        scanf("%d", &opcao);
        fflush(stdin);
        

        switch (opcao)
        {
        case 1:

            if (cont >= max_cadastro) {
                printf("Limite de cadastros atingido!\n");
                break;
            }

            printf("\nMATRICULA:  %d", cont);

            printf("\nNOME COMPLETO: ");
            fgets(nome[cont], max_caractere, stdin);

            printf("ENDERECO COMPLETO: ");
            fgets(endereco[cont], max_caractere, stdin);
            fflush(stdin);

            printf("IDADE: ");
            scanf("%d", &idade[cont]);
            fflush(stdin);

            printf("\nCADASTRO CONCLUIDO!");
            printf("\n-------------------------------------\n");
           
            matricula[cont] = cont;
            cont++;
            break;
        case 2:
            
            printf("\nDigite o nome da pessoa que dejesa consultar: ");
            fgets(consulta, max_caractere, stdin);

            for (i = 0; i < cont; i++)
            {
                encontrar = strcmp(consulta, nome[i]);

                if (encontrar == 0) {
                    printf("\nMATRICULA: %d\n", matricula[i]);
                    printf("ENDERECO: %s", endereco[i]);
                    printf("IDADE: %d\n", idade[i]);
                    break;
                }  
            } 
            
            if(encontrar != 0) {
                printf("\nPessoa nao cadastrada.\n");
            }
            
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

    return 0;
}