#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int altura;
    int cont = 0;

    do
    {
        altura = get_int("\nDigite a altura da pirâmide de 1 a 8 = ");

    }
    while (altura < 1 || altura > 8);

    int bloco = altura;                                     //Cria uma variável com o mesmo valor da altura, para poder mexer nela

    for (int fileiras = 0; fileiras <= altura; fileiras++) //A quantidade de fileiras será igual da altura, tendo de percorrer uma a uma
    {
        for (int espaco = bloco; espaco > 0; espaco--)     //Coloca os espaços, até a qauntidade abaixo do total da altura
        printf(" ");

        bloco--;                                           //Variável para vai passando de fileira em fileira

        for (int coluna = 0; coluna <= fileiras; coluna++)   //Vai acompanhando as fileiras, fileira 1 tem um, fileira 2 tem 2 ... imprime apenas um bloco
        {

            if(coluna!=fileiras)
             {
                printf("#");
                cont++;
             }

            if(coluna==fileiras)
             {
                printf("  ");

                while(cont>0)
                {
                    printf("#");
                    cont--;
                }
            }
        }
        printf("\n");
    }

    printf("\n");
}