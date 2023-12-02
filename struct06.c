#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct dados
{
    char nome[300];
    char data[200];
    char matri[200];
    char ende[200];
};

struct dados_do_cliente
{
    char nome[300];
    char data[200];
    char ende[200];

};

int main () {
 setlocale(LC_ALL, "portuguese");

struct dados inf[3];
struct dados cli[3];
int i;

for ( i = 0; i < 3; i++)
{

printf ("Digite os dados do funcionario...\n");

printf("Digite seu nome: \n");
gets(inf[i].nome);

printf("Digite sua data de admissao: \n");
gets(inf[i].data);

printf("Digite sua matricula: \n");
gets (inf[i].matri);

printf("Digite seu endereco: \n");
gets(inf[i].ende);

printf ("Digite os dados cliente...\n");

printf("Digite seu nome: \n");
gets(cli[i].nome);

printf("Digite sua data de nascimento: \n");
gets(cli[i].data);

printf("Digite seu CPF: \n");
gets (cli[i].ende);
}

system ("cls||clear");
for ( i = 0; i < 3; i++)
{

printf ("\nDados do funcionario:\n");

printf("Seu nome: %s \n", inf[i].nome);
    printf("Data de admissao: %s \n", inf[i].data);
            printf("Sua matricula: %s \n", inf[i].matri);
                printf("Seu endereco: %s \n", inf[i].ende);

printf ("\nDados do cliente:\n");

 printf("Seu nome: %s \n", cli[i].nome);
    printf("Data de nascimento: %s \n", cli[i].data);
            printf("Seu endereco: %s \n", cli[i].ende);
}



return 0;
}
