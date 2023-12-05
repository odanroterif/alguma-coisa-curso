#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
void thefunction()
{
    printf("\n======================\n");
    printf("\tTAREFA");
    printf("\n======================\n");
}
void verification(int number[])
{
    int parORimp[2] = {0, 0};
    int i;
    for (i = 0; i < 6; i++)
    {
        if (number[i] % 2 == 0)
        {
            parORimp[0]++;
        }
        else
        {
            parORimp[1]++;
        }
    }
    printf("pares digitados: %i", parORimp[0]);
    printf("\nimpares digitados: %i", parORimp[1]);
}
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration-------------
    int number[6];
    int i;
//---------------------------------
    thefunction();
    for (i = 0; i < 6; i++)
    {
        printf("digite o %iº número: ", i + 1);
        scanf("%i", &number[i]);
        system("cls || clear");
    }
    verification(number);
    return 0;
}