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
    int number[5];
    int i;
//--------------------------------
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %i� n�mero: ", i + 1);
        scanf("%i", &number[i]);
        if (number[i] < 0)
        {
            number[i] = 0;
        }
        system("cls || clear");
    }
    printf("n�meros digitados: ");
    for (i = 0; i < 5; i++)
    {
        printf("%i,", number[i]);
    }
    return 0;
}