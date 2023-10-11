#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//---------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
// variable declaration--------
    float number;
    float numbertwo;
    float numbertri;
//-----------------------------
    printf("digite a primeira nota: ");
    scanf("%f", &number);
    while (number < 0 || number > 10)
    {
        printf("nota invalida, digite novamente: ");
        scanf("%f", &number);
        system("cls || flush");
    }
    printf("digite a segunda nota: ");
    scanf("%f", &numbertwo);
    while (numbertwo < 0 || numbertwo > 10)
    {
        printf("nota invalida, digite novamente: ");
        scanf("%f", &numbertwo);
        system("cls || flush");
    }
    printf("digite a terceira nota: ");
    scanf("%f", &numbertri);
    while (numbertri < 0 || numbertri > 10)
    {
        printf("nota invalida, digite novamente: ");
        scanf("%f", &numbertwo);
        system("cls || flush");
    }
    printf("média: %.1f", (number + numbertwo + numbertri) / 3);
    if ((number + numbertwo + numbertri) / 3 >= 7)
    {
        printf("\naprovado");
    }
    else if ((number + numbertwo + numbertri) / 3 < 5)
    {
        printf("\nreprovado");
    }
    else if ((number + numbertwo + numbertri) / 3 >= 5 && (number + numbertwo + numbertri) / 3 < 7)
    {
        printf("\n recuperação");
    }

    return 0;
}