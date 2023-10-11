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
    printf("média do aluno: %.1f", (number + numbertwo) / 2);
    return 0;
}