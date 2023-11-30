#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
struct struct1
{
    char name[999];
    char birthdate[999];
    int rg;
    int cpf;
};

int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration------------
    struct struct1 person[5];
    int i;
//--------------------------------
    for (i = 0; i < 5; i++)
    {
        printf("PESSOA %i\n", i + 1);
        printf("digite seu nome: ");
        gets(person[i].name);
        fflush(stdin);
        printf("\nDigite sua data de nascimento: ");
        gets(person[i].birthdate);
        fflush(stdin);
        printf("\nRG: ");
        scanf("%i", &person[i].rg);
        printf("\nCPF: ");
        scanf("%i", &person[i].cpf);
        fflush(stdin);
        system("cls || clear");
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n\n%iº PESSOA\n", i + 1);
        printf("\nnome: %s", person[i].name);
        fflush(stdin);
        printf("\nData de Nascimento: %s", person[i].birthdate);
        printf("\nRG: %i", person[i].rg);
        printf("\nCPF: %i", person[i].cpf);
        fflush(stdin);
    }

    return 0;
}