#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
// variable declaration----
    int number;
    int numbertwo;
    int numbertri;
//-------------------------
    printf("digite o primeiro n�mero: ");
    scanf("%i", &number);
    printf("digite o segundo n�mero: ");
    scanf("%i", &numbertwo);
    printf("digite o terceiro n�mero: ");
    scanf("%i", &numbertri);
    system("cls || flush");
    printf("n�meros digitados: %i,%i,%i", number, numbertwo, numbertri);
    if (number > numbertwo && number > numbertri)
    {
        printf("\nmaior n�mero: %i", number);
    }
    else if (numbertwo > number && numbertwo > numbertri)
    {
        printf("\nmaior n�mero: %i", numbertwo);
    }
    else if (numbertri > numbertwo && numbertri > number)
    {
        printf("\nmaior n�mero: %i", numbertri);
    }
    if (number < numbertwo && number < numbertri)
    {
        printf("\nmenor n�mero: %i", number);
    }
    else if (numbertwo < number && numbertwo < numbertri)
    {
        printf("\nmenor n�mero: %i", numbertwo);
    }
    else if (numbertri < number && numbertri < numbertwo)
    {
        printf("\nmenor n�mero: %i", numbertri);
    }
    return 0;
}