#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{
    float troco;
    int calcula_troco(int);                     //escopo da função para calcular as moedas separadamente

    do
    {

    troco = get_float("\nQual o valor devido? -USE PONTO AO INVÉS DE VIRGULA: ");     //Pede ao usuário o valor do troco

    } while(troco<0);                                   //verifica se o troco é um valor válido, não sendo repete a pergunta

    int trocoi = round (troco*100);                     //Converte o valor do troco de um float para um int

    calcula_troco(trocoi);

}

int calcula_troco(int trocoi)                           //função para calcular separadamente a quantidade de cada valor de moedas
{
    int vintecinco = 0;
    int dez = 0;
    int cinco = 0;
    int um = 0;
    int moedas = 0;

    do
    {

    if(trocoi>=25)                                      //Verifica se o valor do troco cabe no valor das moedas disponíveis
    {
        trocoi = trocoi - 25;                           //tira o valor da moeda no valor total do troco
        moedas++;                                       //Inclementa o número de moedas utilizadas
        vintecinco++;
    }

    else if(trocoi>=10)
    {
        trocoi = trocoi - 10;
        moedas++;
        dez++;
    }

    else if(trocoi>=5)
    {
        trocoi = trocoi - 5;
        moedas++;
        cinco++;
    }

    else
    {
        trocoi = trocoi - 1;
        moedas++;
        um++;
    }

    } while(trocoi>0);                                      //Verifica se acabou o valor do troco

    printf ("%i moedas no total\n",moedas);                 //Imprime o valor de moedas utilizadas no troco

    printf("\nSeparadas em: \n %i moedas de Vinte e Cinco\n %i moedas de Dez\n %i moedas de Cinco\n %i moedas de Um\n\n",
    vintecinco, dez, cinco, um);

    return 1;
}
