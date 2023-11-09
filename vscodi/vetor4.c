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
    int min = 999;
    int max = 0;
//--------------------------------
    for (i = 0; i < 5; i++)
    {
        printf("digite o %i° número: ", i + 1);
        scanf("%i", &number[i]);
        system("cls || clear");
        // se/if simplificado/operador ternario
        // max = number[i] > max ? number[i] : max;
        // min = number[i] < min ? number[i] : min;
        if (number[i] < min)
        {
            min = number[i];
        }
        if (number[i] > max)
        {
            max = number[i];
        }
    }
    printf("números digitados: ");
    printf("%i,%i,%i,%i,%i", number[0], number[1], number[2], number[3], number[4]);
    printf("\nmenor número: %i", min);
    printf("\nmaior número: %i", max);
    return 0;
}