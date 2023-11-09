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
    char name[999][5];
    int age[5];
    int i;
//--------------------------------
    for (i = 0; i < 5; i++)
    {
        printf("Digite seu nome: ");
        gets(name[i]);
        fflush(stdin);
        system("cls || clear");
        printf("Digite sua idade: ");
        scanf("%i", &age[i]);
        fflush(stdin);
        system("cls || clear");
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n%s,%i anos de idade", name[i], age[i]);
        fflush(stdin);
    }
    return 0;
}