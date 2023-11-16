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
    char students[2][999];
    int notes[2][3];
    int i, j;
//--------------------------------
    for (i = 0; i < 2; i++)
    {
        printf("\n\nnome do %iº aluno: ", i + 1);
        gets(students[i]);
        fflush(stdin);
        for (j = 0; j < 3; j++)
        {
            printf("digite a %iº nota: ", j + 1);
            scanf("%i", &notes[i][j]);
            fflush(stdin);
        }
    }
    for (i = 0; i < 2; i++)
    {
        printf("\nnome do %iº aluno: %s", i + 1, students[i]);
        for (j = 0; j < 3; j++)
        {
            printf("\nnotas: %i", notes[i][j]);
        }
    }
    return 0;
}