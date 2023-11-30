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
    char location[999];
};

int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration------------
struct struct1 person; //struct struct1 = variavel com propriedades das variaveis dentro da struct
//--------------------------------
    printf("digite seu nome: ");
    gets(person.name);
    fflush(stdin);
    printf("\ndigite sua idade: ");
    scanf("%i",&person.age);
    fflush(stdin);
    printf("\ndigite seu endereço: ");
    gets(person.location);
    system("cls || clear");
    printf("EXIBINDO DADOS ");
    printf("\n\nnome: %s",person.name);
    printf("\nidade: %i",person.age);
    printf("\nendereço: %s",person.location);
    return 0;
}