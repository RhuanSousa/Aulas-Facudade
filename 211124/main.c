#include <stdio.h>

typedef struct acesso_t acesso_t;

struct acesso_t
{
    char senha[124];
    char login[124];
    char url[124];
};

void cadastro(acesso_t * acesso){

    printf("\n Url: ");
    scanf("%s", acesso->url);

    printf("\n Login: ");
    scanf("%s", acesso->login);

    printf("\n Senha: ");
    scanf("%s", acesso->senha);
}

void exibir(acesso_t * acesso){

    printf("\n URL: %s", acesso->url);
    printf("\n LOGIN: %s", acesso->login);
    printf("\n SENHA: %s", acesso->senha);
}


int main(void)
{
    acesso_t acesso[10];
    acesso_t * pa;

    for (int i = 0; i < 10; i++)
    {
        pa->url;

        printf("\n\nNOVO CADASTRO\n");
        cadastro(&acesso[i]);
        exibir(&acesso[i]);

    }
    
    

    return 0;
}
