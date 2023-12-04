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
    char cpf[999];
};

int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration------------
    struct struct1 employe;
    struct struct1 person[3];
    int i;
//--------------------------------
    printf("nome do funcionario: ");
    gets(employe.name);
    fflush(stdin);
    printf("\nidade do funcionario: ");
    scanf("%i", &employe.age);
    fflush(stdin);
    printf("\nCPF do funcionario: ");
    gets(employe.cpf);
    fflush(stdin);
    system("cls || clear");
    for (i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            printf("nome do client: ");
            gets(person[i].name);
        }
        fflush(stdin);
        if (i == 1)
        {
            printf("\nidade do cliente: ");
            scanf("%i", &person[i].age);
        }
        fflush(stdin);
        if (i == 2)
        {
            printf("\nCPF do cliente: ");
            gets(person[i].cpf);
        }
        fflush(stdin);
    }
    system("cls || clear");
    for (i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            printf("nome: %s", person[i].name);
        }
        fflush(stdin);
        if (i == 1)
        {
            printf("\nidade: %i", person[i].age);
        }
        fflush(stdin);
        if (i == 2)
        {
            printf("\nCPF: %s", person[i].cpf);
        }
    }

    return 0;
}