#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
struct location
{
    char street[999];
    char rote[999];
    int number;
    char city[999];
    char district[999];
};
struct struct1
{
    char name[999];
    char startday[999];
    int registration;
    struct location locatIon;
};
struct struct2
{
    char name[999];
    char birthday[999];
    struct location locatIon;
};

int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration-------------
    struct struct1 employe[3];
    struct struct2 person[3];
    int i;
//---------------------------------
    for (i = 0; i < 3; i++)
    {
        printf("nome do funcionario %i: ", i + 1);
        gets(employe[i].name);
        fflush(stdin);
        printf("\nData de adimissão do funcionario %i: ", i + 1);
        gets(employe[i].startday);
        fflush(stdin);
        printf("matricula do funcionario %i: ", i + 1);
        scanf("%i", &employe[i].registration);
        fflush(stdin);
        printf("\nRua do funcionario %i: ", i + 1);
        gets(employe[i].locatIon.street);
        fflush(stdin);
        printf("\nBairro do funcionario %i: ", i + 1);
        gets(employe[i].locatIon.rote);
        fflush(stdin);
        printf("\nnúmero do funcionario %i: ", i + 1);
        scanf("%i", &employe[i].locatIon.number);
        fflush(stdin);
        printf("\ncidade do funcionario %i: ", i + 1);
        gets(employe[i].locatIon.city);
        fflush(stdin);
        printf("\nestado do funcionario %i: ", i + 1);
        gets(employe[i].locatIon.district);
        fflush(stdin);
        system("cls || clear");
    }
    system("cls || clear");
    for (i = 0; i < 3; i++)
    {
        printf("nome do cliente %i: ", i + 1);
        gets(person[i].name);
        fflush(stdin);
        printf("\nData de nascimento do cliente %i: ", i + 1);
        gets(person[i].birthday);
        fflush(stdin);
        printf("\nRua do cliente %i: ", i + 1);
        gets(person[i].locatIon.street);
        fflush(stdin);
        printf("\nBairro do cliente %i: ", i + 1);
        gets(person[i].locatIon.rote);
        fflush(stdin);
        printf("\nnúmero do cliente %i: ", i + 1);
        scanf("%i", &person[i].locatIon.number);
        fflush(stdin);
        printf("\ncidade do cliente %i: ", i + 1);
        gets(person[i].locatIon.city);
        fflush(stdin);
        printf("\nestado do cliente %i: ", i + 1);
        gets(person[i].locatIon.district);
        fflush(stdin);
        system("cls || clear");
    }
    system("cls || clear");
    for (i = 0; i < 3; i++)
    {
        printf("\n\nFUNCIONARIO %i", i + 1);
        printf("\nnome: %s", employe[i].name);
        fflush(stdin);
        printf("\nadimissão: %s", employe[i].startday);
        fflush(stdin);
        printf("\nmatricula: %i", employe[i].registration);
        fflush(stdin);
        printf("\nENDEREÇO:");
        printf("\nRua: %s", employe[i].locatIon.street);
        fflush(stdin);
        printf("\nBairro: %s", employe[i].locatIon.rote);
        fflush(stdin);
        printf("\nnúmero: %i", employe[i].locatIon.number);
        fflush(stdin);
        printf("\ncidade: %s", employe[i].locatIon.city);
        fflush(stdin);
        printf("\nestado: %s", employe[i].locatIon.district);
        fflush(stdin);
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n\nCLIENTE %i", i + 1);
        printf("\nnome: %s", person[i].name);
        fflush(stdin);
        printf("\nData de nascimento: %s", person[i].birthday);
        fflush(stdin);
        printf("\nENDEREÇO:");
        printf("\nRua: %s", person[i].locatIon.street);
        fflush(stdin);
        printf("\nBairro: %s", person[i].locatIon.rote);
        fflush(stdin);
        printf("\nnúmero: %i", person[i].locatIon.number);
        fflush(stdin);
        printf("\ncidade: %s", person[i].locatIon.city);
        fflush(stdin);
        printf("\nestado: %s", person[i].locatIon.district);
        fflush(stdin);
    }

    return 0;
}