#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
struct struct1
{
    char name[999];
    int age;
    float note[2];
};

int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration------------
    struct struct1 students[3];
    int i, j;
//--------------------------------
    for (i = 0; i < 3; i++)
    {
        printf("ALUNO %i\n", i + 1);
        printf("digite seu nome: ");
        gets(students[i].name);
        fflush(stdin);
        printf("\nDigite sua idade: ");
        scanf("%i", &students[i].age);
        for (j = 0; j < 2; j++)
        {
            do
            {
                printf("\nDigite sua nota: ");
                scanf("%f", &students[i].note[j]);
                if (students[i].note[j] < 0 || students[i].note[j] > 10)
                {
                    system("cls || clear");
                    printf("NOTA INVALIDA\n\n");
                }
            } while (students[i].note[j] < 0 || students[i].note[j] > 10);
        }
        fflush(stdin);
        system("cls || clear");
    }
    system("cls || clear");
    for (i = 0; i < 3; i++)
    {
        printf("\n\n%iº ALUNO\n", i + 1);
        printf("\nnome: %s", students[i].name);
        fflush(stdin);
        printf("\nidade: %i", students[i].age);
        printf("\nnotas: ");
        for (j = 0; j < 2; j++)
        {
            printf("%.1f|", students[i].note[j]);
        }
        fflush(stdin);
    }
    return 0;
}