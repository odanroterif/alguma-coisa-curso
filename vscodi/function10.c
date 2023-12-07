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
float conversion(float number)
{
    float convert;

    convert = number * 100;

    return convert;
}
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration-------------
    float meters;
//---------------------------------
    thefunction();
    do
    {
        printf("Diga o metro para conversão: ");
        scanf("%f", &meters);
        system("cls  || clear");
        if (meters <= 0)
        {
            system("cls || clear");
            printf("0 E NEGATIVO NÃO DÁ!!\n\n");
        }
    } while (meters <= 0);
    printf("valor convertido para cm: %.3f", conversion(meters));
    return 0;
}