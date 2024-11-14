#include <stdio.h>

int main(void) {

    char * marca[1000];
    char * modelo[1000];
    int quantidade[1000];
    float preco[1000];

    marca [0] = "Dell";
    modelo [0] = "XPS15";
    quantidade [0] = 1000;
    preco [0] = 8000.0;

    printf("\n Marca: %s", marca[0]);
    printf("\n Modelo: %s", modelo[0]);
    printf("\n Quantidade: %d", quantidade[0]);
    printf("\n Preco: %.2f", preco[0]);

    return 0;
}