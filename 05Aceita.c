#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char r = 'a';

while (r != 's' && r != 'S' && r != 'n' && r !='N') //Fica repetindo até o usuário entrar com uma opção válida

{
    r = get_char("\nDigite S para aceitar ou N para não = "); //Pede ao usuário uma resposta onde ele deve responder S ou N

    if (r == 's' || r == 'S')

    printf("Sim, aceita");

    else if (r == 'n' || r == 'N')

    printf("Não aceita");

    else

    printf("!! DIGITE UMA OPÇÃO VÁLIDA !!\n");

}
}