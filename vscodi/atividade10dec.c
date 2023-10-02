#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
    // variable delacration----
    char nome[999];
    int idade;
    //-------------------------
    printf("digite seu nome: ");
    gets(nome);
    fflush(stdin);
    printf("digite sua idade: ");
    scanf("%i", &idade);
    system("cls || flush");

    if (idade < 18 || idade > 65)
    {
        printf("no puedes votar");
    }
    else
    {
        printf("vete a votar");
    }
    return 0;
}
