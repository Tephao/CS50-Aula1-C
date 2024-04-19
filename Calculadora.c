#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int r = 0;

    while (r!=5)
    {

        printf("\n-----------------------------------------------------------------------");

        printf("\n|                             CALCULADORA                             |");

        printf("\n-----------------------------------------------------------------------");

        printf("\nQue tipo de operação deseja fazer?");

        r = get_int("\n\n1-ADIÇÃO    2-SUBTRAÇÃO   3-DIVISÃO   4-MULTIPLICAÇÃO    5-SAIR  OP = "); //Pede ao usuário escolher uma opção

        if(r>5||r<1) //Verifica se o usuário digitou um número válido

        printf("\n\n!! POR FAVOR DIGITE UM NUMERO DE 1 A 5 !!\n");

        if(r==1)
            {
            long x = get_long("\nX: "); //Pede um número inteiro ao usuário, e insere na variável X

            long y = get_long("Y: "); //Pede um número inteiro ao usuário, e insere na variável Y

            printf("X + Y = %li\n\n", x + y); //Imprime o inteiro resultante da soma das variáveis
            }

        else if(r==2)
        {
            long x = get_long("\nX: "); //Pede um número inteiro ao usuário, e insere na variável X

            long y = get_long("Y: "); //Pede um número inteiro ao usuário, e insere na variável Y

            printf("X - Y = %li\n\n", x - y); //Imprime o inteiro resultante da subtração das variáveis
        }

        else if(r==3)
        {
            float x = get_float("\nX: "); //Pede um número ao usuário, e insere na variável X

            float y = get_float("Y: "); //Pede um número ao usuário, e insere na variável Y

            float z = x / y; //Insere o resultado da divisão das variáveis anteriores na váriavel float Z

            printf("X / Y = %f\n\n", z); //Imprime um float resultante da divisão das variáveis
        }

        else if(r==4)
        {
            long x = get_long("\nX: "); //Pede um número inteiro ao usuário, e insere na variável X

            long y = get_long("Y: "); //Pede um número inteiro ao usuário, e insere na variável Y

            printf("X * Y = %li\n\n", x * y); //Imprime o inteiro resultante da subtração das variáveis
        }
    }
}