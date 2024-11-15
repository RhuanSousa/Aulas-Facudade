#include <stdio.h>

struct notebook_t
{
    char *marca;
    char *modelo;
    int quantidade;
    float preco;
    int ramgb;
    int hdgb;
    int tela;
    char *video;
};

int main(void)
{

    struct notebook_t note[1000];

    printf("Cadastre as informacoes do notebook");

    for (int i = 0; i < 1000; i++)
    {
        printf("\n\tMarca: ");
        scanf("%s", &note[i].marca);

        printf("\n\tModelo: ");
        scanf("%s", &note[i].modelo);

        printf("\n\tRAM (GB): ");
        scanf("%d", &note[i].ramgb);

        printf("\n\tHD (GB): ");
        scanf("%d", &note[i].hdgb);

        printf("\n\tTELA (pol): ");
        scanf("%d", &note[i].tela);

        printf("\n\tPlaca de video: ");
        scanf("%s", &note[i].video);

        printf("\n\tQuantidade: ");
        scanf("%d", &note[i].quantidade);

        printf("\n\tCusto: ");
        scanf("%.2f", &note[i].preco);
    }

    for (int i = 0; i < 1000; i++)
    {
        printf("Especificações do notebook: %d", i + 1);

        printf("\n Marca: %s", note[i].marca);
        printf("\n Modelo: %s", note[i].modelo);
        printf("\n QTD RAM: %d", note[i].ramgb);
        printf("\n QTD HD: %d", note[i].hdgb);
        printf("\n PLACA DE VIDEO: %s", note[i].video);
        printf("\n Quantidade: %d", note[i].quantidade);
        printf("\n Preco: %.2f", note[i].preco);
    }

    return 0;
}