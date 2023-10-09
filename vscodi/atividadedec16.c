#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
// sexo = to upper(sexo); <--- torna algo minusculo em maiusculo
//---------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
// variable declaration-------
    float altura;
    char gender;
    float pesoideal;
//----------------------------
    printf("F para fêminino M para masculino");
    printf("\ndigite seu sexo: ");
    scanf("%c", &gender);
    do
    {
        if ((gender != 'F') && (gender != 'M'))
        {
            printf("o sistema não aceitou o que foi digitado, tente denovo(talvez com letras maiusculas): ");
            scanf("%c", &gender);
            system("cls || flush");
        }

    } while ((gender != 'F') && (gender != 'M'));
    fflush(stdin);
    printf("digite sua altura: ");
    scanf("%f", &altura);
    system("cls || flush");
    switch (gender)
    {
    case 'F':
        pesoideal = (62.1 * altura) - 44.7;
        printf("peso ideal: %.2f", pesoideal);
        break;
    case 'M':
        pesoideal = (72.7 * altura) - 58;
        printf("peso ideal: %.2f", pesoideal);
        break;
    }

    return 0;
}