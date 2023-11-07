#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration------------
    int number;
    int i;
//--------------------------------
    do
    {
        system("cls || clear");
        printf("digite um número maior que 0:");
        scanf("%i", &number);
    } while (number < 1);
    for (i = number; i > 0; i--)
    {
        printf("\n%i", i);
    }

    return 0;
}