#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("\nOlá Mundo\n\n");

    string nome = get_string("Qual é o seu nome?\n");

    printf("\nOlá %s\n\n", nome);
}