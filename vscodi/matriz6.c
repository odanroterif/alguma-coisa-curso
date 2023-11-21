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
    char group[3][999];
    char members[3][5][999];
    int i, j;
//--------------------------------
    for (i = 0; i < 3; i++)
    {
        printf("\n\nnome da %iº banda musical: ", i + 1);
        gets(group[i]);
        fflush(stdin);
        for (j = 0; j < 5; j++)
        {
            printf("digite o nome do %iº integrante: ", j + 1);
            gets(members[i][j]);
        }
        system("cls || clear");
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n\nnome da %iº banda: %s", i + 1, group[i]);
        printf("\nintegrantes: ");
        for (j = 0; j < 5; j++)
        {
            printf("%s,", members[i][j]);
        }
    }
    return 0;
}