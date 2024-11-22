#include <stdio.h>

enum marcas_t{
    DELL = 0,
    SAMSUNG = 1,
    ASUS = 2,
};

typedef struct notebook_t notebook_t;

struct notebook_t
{
    enum marcas_t marca;
    char modelo[50];
    int quantidade;
    float preco;
    int ramgb;
    int hdgb;
    int tela;
    char *video;
};

void cadastro_notebook(notebook_t * prod){

    printf("Cadastre as informacoes do notebook");

        printf("\n\tMarca: ");
        scanf("%d", &prod->marca);

        printf("\n\tModelo: ");
        scanf("%s", &prod->modelo);

        printf("\n\tRAM (GB): ");
        scanf("%d", &prod->ramgb);

        printf("\n\tHD (GB): ");
        scanf("%d", &prod->hdgb);

        printf("\n\tTELA (pol): ");
        scanf("%d", &prod->tela);

        printf("\n\tPlaca de video: ");
        scanf("%s", &prod->video);

        printf("\n\tQuantidade: ");
        scanf("%d", &prod->quantidade);

        printf("\n\tCusto: ");
        scanf("%.2f", &prod->preco);
}

void exibir_nb(notebook_t * prod){

    printf("\n Marca: %d", prod->marca);
    printf("\n Modelo: %s", prod->modelo);
    printf("\n QTD RAM: %d", prod->ramgb);
    printf("\n QTD HD: %d", prod->hdgb);
    printf("\n PLACA DE VIDEO: %s", prod->video);
    printf("\n Quantidade: %d", prod->quantidade);
    printf("\n Preco: %.2f", prod->preco);

}


int main(void)
{
   notebook_t note[1000];
   int i;

   for (i = 0; i < 1000; i++)
   {
        cadastro_notebook(&note[i]);
        exibir_nb(&note[i]);
   }
    return 0;
}