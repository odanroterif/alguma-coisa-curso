#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
struct struct1
{
    char name[999];
    char startday[999];
    int matri;
    char location[999];
};
struct struct2
{
    char name[999];
    char birthday[999];
    char location[999];
};
/*struct location
{
    char street[999];
    char rote[999];
    int number;
    char city[999];
    char district[999];
};*/

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
        scanf("%i", &employe[i].matri);
        fflush(stdin);
        printf("\nEndereço do funcionario %i: ", i + 1);
        gets(employe[i].location);
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
        printf("\nEndereço do cliente %i: ", i + 1);
        gets(person[i].location);
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
        printf("\nmatricula: %i", employe[i].matri);
        fflush(stdin);
        printf("\nendereço: %s", employe[i].location);
        fflush(stdin);
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n\nCLIENTE %i", i + 1);
        printf("\nnome: %s", employe[i].name);
        fflush(stdin);
        printf("\nData de nascimento: %s", person[i].birthday);
        fflush(stdin);
        printf("\nendereço: %s", employe[i].location);
        fflush(stdin);
    }

    return 0;
}