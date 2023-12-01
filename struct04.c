#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main () {
struct informacoes
{
    char nome[200];
    char data[200];
    char rg[200];
    char cpf[200];
};
struct informacoes inf[5];
int i;

for ( i = 0; i < 5; i++)
{
    printf ("Digite seu nome:");
    gets (inf[i].nome);

    printf ("Digite sua data de nascimento:");
    gets (inf[i].data);

    printf ("Digite seu RG:");
    gets (inf[i].rg);

    printf ("Digite seu CPF:");
    gets (inf[i].cpf);

    fflush(stdin);
}

printf("\n Exibindo Resultados... \n");
for ( i = 0; i < 5; i++)
{
    printf ("Seu nome:%s\n", inf[i].nome);
    printf ("Sua data de nascimento:%s\n", inf[i].data);
    printf ("Seu RG:%s\n", inf[i].rg);
    printf ("Seu CPF:%s\n", inf[i].cpf);

}





    return 0;
}