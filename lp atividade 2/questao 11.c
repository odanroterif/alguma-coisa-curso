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
    int code = 45786;
    int acesscode;
//--------------------------------
    do
    {
        printf("digite o c�digo de acesso: ");
        scanf("%i", &acesscode);
        if (acesscode != code)
        {
            system("cls || clear");
            printf("ACESSO NEGADO, TENTATIVA DE INVAS�O\n\n");
        }
    } while (acesscode != code);

    return 0;
}