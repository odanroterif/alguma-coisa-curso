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
    float tribute;
    float operation;

    if (number < 100)
    {
        operation = (number) * 10 / 100;
        tribute = number + operation;
    }
    else
    {
        operation = (number) * 20 / 100;
        tribute = number + operation;
    }
    return tribute;
}
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration-------------
    float price;
//---------------------------------
    thefunction();
    do
    {
        printf("Diga o valor do produto: ");
        scanf("%f", &price);
        system("cls  || clear");
        if (price <= 0)
        {
            system("cls || clear");
            printf("0 E NEGATIVO NÃO DÁ!!\n\n");
        }
    } while (price <= 0);
    printf("valor do produto com taxa: %.2f", conversion(price));
    return 0;
}