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
int verificationimp(int number[])
{
    int imp = 0;
    int i;
    for (i = 0; i < 6; i++)
    {
        if (number[i] % 2 != 0)
        {
            imp++;
        }
    }
    return imp;
}
int verificationpar(int number[])
{
    int par = 0;
    int i;
    for (i = 0; i < 6; i++)
    {
        if (number[i] % 2 == 0)
        {
            par++;
        }
    }
    return par;
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
    printf("quantidade de pares: %i", verificationpar(number));
    printf("\nquantidade de impares: %i", verificationimp(number));
    return 0;
}