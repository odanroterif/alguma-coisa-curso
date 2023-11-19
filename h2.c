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
    int note;
//--------------------------------
    do
    {
        printf("AVALIAÇÃO DE ATENDIMENTO\n\n");
        printf("nota de 1 á 10: ");
        scanf("%i", &note);
        if (note > 10 || note < 1)
        {
            system("cls || clear");
        }
    } while (note > 10 || note < 1);

    if (note <= 3)
    {
        printf("\n\npessimo");
    }
    if (note <= 6 && note > 3)
    {
        printf("\n\nrazoavel");
    }
    if (note > 6 && note < 10)
    {
        printf("\n\nbom");
    }
    if (note == 10)
    {
        printf("\n\nexcelente");
    }
    return 0;
}