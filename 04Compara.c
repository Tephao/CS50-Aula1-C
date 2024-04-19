#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("\n---------------------------------------------");

    printf("\n|              COMPARA X e Y                 |");

    printf("\n---------------------------------------------");

    int x = get_int("\nX = ");

    int y = get_int("Y = ");

    if(x<y)

    printf("X é menor que Y\n\n");

    else if(x>y)

    printf("X é maior que \n\n");

    else

    printf("X é igual a Y\n\n");

}