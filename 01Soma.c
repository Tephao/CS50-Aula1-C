#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("\n---------------------------------------------");

    printf("\n|                SOMA X e Y                  |");

    printf("\n---------------------------------------------");

    int x = get_int("\nX: "); //Pede um número inteiro ao usuário, e insere na variável X

    int y = get_int("Y: "); //Pede um número inteiro ao usuário, e insere na variável Y

    printf("X + Y = %i\n\n", x + y); //Imprime o inteiro resultante da soma das variáveis
}