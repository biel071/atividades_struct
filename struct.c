#include <stdio.h>

int main()
{
struct dados_usuario
{
    char nome[200];
    int idade;
    float peso;
    float altura;
};

struct dados_usuario usuario;

printf ("Digite seu nome:");
gets (usuario.nome);

printf ("DIgite sua idade:");
scanf ("%d", &usuario.idade);

printf ("Digite seu peso:");
scanf ("%f",&usuario.peso);

printf ("Digite sua altura:");
scanf ("%f",&usuario.altura);

system ("cls||clear"); 

printf("\nExibindo Resultados...\n");

printf ("Nome:%s\n",usuario.nome);
printf("Idade:%d\n",usuario.idade);
printf ("Peso:%.1f\n",usuario.peso);
printf("Altura:%.2f\n",usuario.altura);



    return 0;
}