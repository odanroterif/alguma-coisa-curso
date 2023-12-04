#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
struct struct1
{
    char name[999];
    char classnumber[999];
    int age;
    float note[2];
    float results;
};
struct struct2
{
    char name[999];
    char discipline[999];
    char class[999];
};

int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration-------------
    struct struct1 students[3];
    struct struct2 teacher[2];
    float plus = 0;
    int i, j;
//---------------------------------
    for (i = 0; i < 3; i++)
    {
        printf("nome do aluno %i: ", i + 1);
        gets(students[i].name);
        fflush(stdin);
        printf("\nNúmero da Turma: ");
        gets(students[i].classnumber);
        fflush(stdin);
        printf("Idade: ");
        scanf("%i", &students[i].age);
        fflush(stdin);
        for (j = 0; j < 2; j++)
        {
            do
            {
                printf("\nnota %i: ", j + 1);
                scanf("%f", &students[i].note[j]);
                if (students[i].note[j] < 0 || students[i].note[j] > 10)
                {
                    system("cls || clear");
                    printf("NOTA INVALIDA, DIGITE NOVAMENTE\n\n");
                }
            } while (students[i].note[j] < 0 || students[i].note[j] > 10);
            plus += students[i].note[j];
        }
        students[i].results = plus / 2;
        plus = 0;
        fflush(stdin);
        system("cls || clear");
    }
    system("cls || clear");
    for (i = 0; i < 2; i++)
    {
        printf("nome do professor %i: ", i + 1);
        gets(teacher[i].name);
        fflush(stdin);
        printf("\nDisciplina: ");
        gets(teacher[i].discipline);
        fflush(stdin);
        printf("\nturma: ");
        gets(teacher[i].class);
        fflush(stdin);
        system("cls || clear");
    }
    system("cls || clear");
    for (i = 0; i < 3; i++)
    {
        printf("\n\nALUNO %i", i + 1);
        printf("\nnome: %s", students[i].name);
        fflush(stdin);
        printf("\nnúmero da turma: %s", students[i].classnumber);
        fflush(stdin);
        printf("\nidade: %i", students[i].age);
        fflush(stdin);
        printf("notas: ");
        for (j = 0; j < 2; j++)
        {
            printf("%.1f|", students[i].note[j]);
        }
        printf("média: %.1f", students[i].results);
        fflush(stdin);
        if (students[i].results >= 7)
        {
            printf("\n APROVADO");
        }
        else
        {
            printf("\nREPROVADO");
        }
        fflush(stdin);
    }
    for (i = 0; i < 2; i++)
    {
        printf("\n\nPROFESSOR %i", i + 1);
        printf("\nnome: %s", teacher[i].name);
        fflush(stdin);
        printf("\nDisciplina: %s", teacher[i].discipline);
        fflush(stdin);
        printf("\nturma: %s", teacher[i].class);
        fflush(stdin);
    }
    return 0;
}