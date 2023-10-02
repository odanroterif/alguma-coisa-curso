#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
// variable delacration----
    char codigo[999];
    int ano;
    int tempo;
    char resultado[999];
//-------------------------
    printf("digite seu código de trabalho: ");
    gets(codigo);
    fflush(stdin);
    printf("digite seu ano de nascimento: ");
    scanf("%i",&ano);
    printf("informe os anos trabalhados: ");
    scanf("%i",&tempo);
    system("cls || flush");
    if (( 2023 - ano ) >= 65 || tempo >= 30)
    {
        strcpy(resultado,"pode se aposentar ");
    } else { 
        strcpy(resultado,"não pode se aposentar");
    }
    printf("situação: %s",resultado);
    return 0;
}