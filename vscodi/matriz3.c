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
    float notes[2][3];
    float results[2];
    float plus[2] = {0, 0};
    int i, j;
//--------------------------------
    for (i = 0; i < 2; i++)
    {
        printf("\n\nnome do %iº aluno: ", i + 1);
        gets(students[i]);
        fflush(stdin);
        for (j = 0; j < 3; j++)
        {

            do
            {
                printf("digite a %iº nota: ", j + 1);
                scanf("%f", &notes[i][j]);
                if (notes[i][j] < 0)
                {
                    system("cls || clear");
                    printf("A NOTA NÃO PODE SER UM NÚMERO NEGATIVO\n\n");
                }
            } while (notes[i][j] < 0);
            fflush(stdin);
            plus[i] += notes[i][j];
        }
        system("cls || clear");
    }
    results[0] = plus[0] / j;
    results[1] = plus[1] / j;
    for (i = 0; i < 2; i++)
    {
        printf("\n\nnome do %iº aluno: %s", i + 1, students[i]);
        for (j = 0; j < 3; j++)
        {
            printf("\nnota %i: %.1f", j + 1, notes[i][j]);
        }
        printf("\nmédia: %.1f", results[i]);
    }
    return 0;
}