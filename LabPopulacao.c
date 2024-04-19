#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int inicial, final;
    int anos = 0;

    do
    {
        inicial = get_int("\n\nQual a pupolação inicial? \n");      //Solicita o valor inicial ao usuário

        if (inicial < 9)
        {
            printf("\n\nDigite um número maior ou igual a 9 ");
        }

    }
    while (inicial < 9);

    do
    {
        final = get_int("Qual a pupolação final? \n");              //Solicita o valor final ao usuário

        if (final < inicial)
        {
            printf("A população final não pode ser maior que a população inicial. \nDigite um número maior ou igual a %i\n", inicial);
        }

    }
    while (final < inicial);                                        //Calcula o número de anos até o limite

        if (inicial == final)
            {
                printf("A população inicial é igual a final.\n");
            }

        else
            {
                int ini;

                while (inicial < final)
                {
                    ini = inicial + (inicial / 3);
                    inicial = ini - (inicial / 4);
                    anos++;
                }
            }

    printf("Levará %i anos para atingir a população final\n\n", anos); //Imprime o número de anos
}
