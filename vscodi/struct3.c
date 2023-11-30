#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
struct struct1
{
    char name[999];
    char autor[999];
    char categore[999];
    float price;
};

int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration------------
    struct struct1 book[3];
    int i;
//--------------------------------
    for (i = 0; i < 3; i++)
    {
        printf("digite o nome do %iº livro: ", i + 1);
        gets(book[i].name);
        fflush(stdin);
        printf("\nNome do autor: ");
        gets(book[i].autor);
        fflush(stdin);
        printf("\nCategoria: ");
        gets(book[i].categore);
        fflush(stdin);
        printf("\nPreço: ");
        scanf("%f", &book[i].price);
        fflush(stdin);
        system("cls || clear");
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n\n%iº LIVRO\n", i + 1);
        printf("\nnome: %s", book[i].name);
        printf("\nautor: %s", book[i].autor);
        printf("\ncategoria: %s", book[i].categore);
        fflush(stdin);
        printf("\npreço: %.2f", book[i].price);
        fflush(stdin);
    }

    return 0;
}