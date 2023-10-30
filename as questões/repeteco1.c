#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//-------------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration-----------
    int i;
    float note;
    float plus = 0;
//-------------------------------
    for (i = 1; i <= 5; i++)
    {
        printf("digite a %iº nota: ", i);
        scanf("%f", &note);
        do
        {
            if (note < 0 || note > 10)
            {
                printf("\n\nnota invalida, digite novamente: ");
                scanf("%f", &note);
            }
            system("cls || clear");
        } while (note < 0 || note > 10);

        plus += note;
    }
    printf("média: %.1f", plus / 5);
    if (plus / 5 >= 7)
    {
        printf("\n\naprovado");
    }
    else
    {
        printf("\n\nreprovado");
    }

    return 0;
}