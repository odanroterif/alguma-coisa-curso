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
    char discipline[3][999];
    float notes[3][2];
    float results[3];
    float plus[3] = {0, 0, 0};
    int i, j;
//--------------------------------
    for (i = 0; i < 3; i++)
    {
        printf("\n\nnome da %i� materia: ", i + 1);
        gets(discipline[i]);
        fflush(stdin);
        for (j = 0; j < 2; j++)
        {

            do
            {
                printf("digite a %i� nota: ", j + 1);
                scanf("%f", &notes[i][j]);
                if (notes[i][j] < 0)
                {
                    system("cls || clear");
                    printf("A NOTA N�O PODE SER UM N�MERO NEGATIVO\n\n");
                }
            } while (notes[i][j] < 0);
            fflush(stdin);
            plus[i] += notes[i][j];
        }
        system("cls || clear");
    }
    results[0] = plus[0] / j;
    results[1] = plus[1] / j;
    results[2] = plus[2] / j;
    for (i = 0; i < 3; i++)
    {
        printf("\n\nnome do %i� aluno: %s", i + 1, discipline[i]);
        for (j = 0; j < 2; j++)
        {
            printf("\nnota %i: %.1f", j + 1, notes[i][j]);
        }
        printf("\nm�dia: %.1f", results[i]);
    }
    return 0;
}