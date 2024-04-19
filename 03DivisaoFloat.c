#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("\n---------------------------------------------");

    printf("\n|              DIVIDE X Por Y               |");

    printf("\n---------------------------------------------");

    float x = get_float("\nX: "); //Pede um número ao usuário, e insere na variável X

    float y = get_float("Y: "); //Pede um número ao usuário, e insere na variável Y

    float z = x / y; //Insere o resultado da divisão das variáveis anteriores na váriavel float Z

    printf("X / Y = %.2f\n\n", z); //Imprime um float resultante da divisão das variáveis
}