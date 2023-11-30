#include <stdio.h>

int main()
{
struct dados_usuario
{
    char nome[200];
    char autor[200];
    char cat[200];
    float preco;

    
};
struct dados_usuario inf[3];
int i;

for ( i = 0; i < 3; i++)
{
    printf ("Digite o nome:");
    gets(inf[i].nome);

    printf ("Digite o nome do autor:");
    gets(inf[i].autor);

    printf ("Digite a categoria do livre:");
    gets(inf[i].cat);

    printf ("Digite o preco do livro:");
    scanf ("%f",&inf[i].preco);

    fflush (stdin);
}

system ("cls||clear"); 

printf("\nExibindo Resultados...\n");
for ( i = 0; i < 3; i++)
{
    printf ("\nNome do livro:%s \n",inf[i].nome);
    printf ("\nNome do autor:%s \n",inf[i].autor);
    printf ("\nCategoria do livro:%s \n",inf[i].cat);
    printf ("\nPreco do livro:R$%.1f \n",inf[i].preco);
    
}



return 0;
}