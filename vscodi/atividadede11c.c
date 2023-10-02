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
    printf("digite o primeiro número: ");
    scanf("%i", &number);
    printf("digite o segundo número: ");
    scanf("%i", &numbertwo);
    printf("digite o terceiro número: ");
    scanf("%i", &numbertri);
    system("cls || flush");
    printf("números digitados: %i,%i,%i", number, numbertwo, numbertri);
    if (number > numbertwo && number > numbertri)
    {
        printf("\nmaior número: %i", number);
    }
    else if (numbertwo > number && numbertwo > numbertri)
    {
        printf("\nmaior número: %i", numbertwo);
    }
    else if (numbertri > numbertwo && numbertri > number)
    {
        printf("\nmaior número: %i", numbertri);
    }
    if (number < numbertwo && number < numbertri)
    {
        printf("\nmenor número: %i", number);
    }
    else if (numbertwo < number && numbertwo < numbertri)
    {
        printf("\nmenor número: %i", numbertwo);
    }
    else if (numbertri < number && numbertri < numbertwo)
    {
        printf("\nmenor número: %i", numbertri);
    }
    return 0;
}