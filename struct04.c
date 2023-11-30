#include <stdio.h>

int main()
{
struct dados_usuario
{
    char nome[200];
    int idade;
    float nota[2];

};
struct dados_usuario inf[3];
int i,j;

for ( i = 0; i < 3; i++)
{

printf ("Digite seu nome:");
gets (inf[i].nome);

printf ("Digite sua idade:");
scanf ("%d", &inf[i].idade);

for ( j = 0; j < 2; j++)
{
    printf ("Digite as notas:");
    scanf ("%f",&inf[i].nota[j]);
}
fflush(stdin);

}

system ("cls||clear"); 

printf("\nExibindo Resultados...\n");
for ( i = 0; i < 3; i++)
{
    printf ("\nNome do aluno:%s \n",inf[i].nome);
    printf ("\n Idade do aluno:%d \n",inf[i].idade);
    for ( j = 0; j < 2; j++)
    {
        printf ("\n Suas notas foram:%.1f \n",inf[i].nota[j]);
    }
    
}
return 0;
}