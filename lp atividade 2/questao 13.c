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
    int count = 1;
    int number;
    int min = 999;
    int max = 0;
//--------------------------------
    do
    {
        printf("digite o %i� n�mero: ", count);
        scanf("%i", &number);
        if (number < min)
        {
            min = number;
        }
        if (number > max)
        {
            max = number;
        }

        count++;
        system("cls || clear");
    } while (count < 3);
    printf("menor n�mero: %i", min);
    printf("\nmaior n�mero: %i", max);
    return 0;
}