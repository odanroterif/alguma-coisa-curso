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
    float note;
//--------------------------------
    do
    {
        printf("digite sua nota: ");
        scanf("%f", &note);
        if (note < 0 || note > 10)
        {
            system("cls || clear");
            printf("nota invalida no sistema, digite denovo\n\n ");
        }
    } while (note < 0 || note > 10);
    if (note < 5.0)
    {
        printf("\n\ninsuficiente");
    }
    else if (note > 5.0 && note < 7.0)
    {
        printf("\n\nrazoavel");
    }
    else if (note > 7.0 && note < 9.0)
    {
        printf("\n\nbom");
    }
    else if (note > 9.0)
    {
        printf("\n\nexcelente");
    }
    return 0;
}