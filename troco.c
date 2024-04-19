#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{

    float troco;
    int moedas = 0;

    do
    {

    troco = get_float("\nQual o valor devido? -USE PONTO AO INVÉS DE VIRGULA: ");     //Pede ao usuário o valor do troco

    } while(troco<0);                                   //verifica se o troco é um valor válido, não sendo repete a pergunta

    int trocoi = round (troco*100);                     //Converte o valor do troco de um float para um int

    do
    {

    if(trocoi>=25)                                      //Verifica se o valor do troco cabe no valor das moedas disponíveis
    {
        trocoi = trocoi - 25;                           //tira o valor da moeda no valor total do troco
        moedas++;                                       //Inclementa o número de moedas utilizadas
    }

    else if(trocoi>=10)
    {
        trocoi = trocoi - 10;
        moedas++;
    }

    else if(trocoi>=5)
    {
        trocoi = trocoi - 5;
        moedas++;
    }

    else
    {
        trocoi = trocoi - 1;
        moedas++;
    }

    } while(trocoi>0);                                      //Verifica se acabou o valor do troco

    printf ("%i\n",moedas);                                 //Imprime o valor de moedas utilizadas no troco
}