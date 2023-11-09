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
    float note[3];
    int i;
    int plus = 0;
//--------------------------------
    for (i = 0; i < 3; i++)
    {
        printf("%i° nota: ", i + 1);
        scanf("%f", &note[i]);
        system("cls || clear");
        plus += note[i];
    }
    for (i = 0; i < 3; i++)
    {
        printf("\nnota %i: %.1f", i + 1, note[i]);
    }
    printf("\n\nmédia: %.1f", plus / 3);
    return 0;
}