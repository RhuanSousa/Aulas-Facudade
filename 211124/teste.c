#include <stdio.h>

typedef struct teste_t teste_t;

struct teste_t
{
    char size1;
    float size4;
};

int main(void) {

    teste_t teste;

    printf("\n sizeof(teste_t) = %d", sizeof(teste_t));

    return 0;
}
