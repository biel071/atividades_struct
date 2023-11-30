#include <stdio.h>

int main()
{
struct dados_usuario
{
    char nome[200];
    char end[200];
    int idade;
    
};
struct dados_usuario inf;

printf ("Digite seu nome:");
gets (inf.nome);

printf ("Digite sua idade:");
scanf ("%d", &inf.idade);

fflush(stdin);

printf ("Digite seu endereco:");
gets (inf.end);

system ("cls||clear"); 

printf("\nExibindo Resultados...\n");

printf ("Nome:%s\n",inf.nome);
printf("Idade:%d\n",inf.idade);
printf ("Endereco:%s\n",inf.end);

return 0;
}