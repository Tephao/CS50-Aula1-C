#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("\n---------------------------------------------");

    printf("\n|                SOMA X e Y                  |");

    printf("\n---------------------------------------------");

    long x = get_long("\nX: "); //Pede um número inteiro ao usuário, e insere na variável X

    long y = get_long("Y: "); //Pede um número inteiro ao usuário, e insere na variável Y

    printf("X + Y = %li\n\n", x + y); //Imprime o inteiro resultante da soma das variáveis
}