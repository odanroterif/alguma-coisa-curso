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
    int code;
//--------------------------------
    do
    {
        printf("--------IDIOMAS--------");
        printf("\n\nDIGITE 1 para ingl�s");
        printf("\nDIGITE 2 para espanhol");
        printf("\nDIGITE 3 para franc�s");
        printf("\n\ndigite o c�digo do seu idioma: ");
        scanf("%i", &code);
        if (code > 3 || code < 1)
        {
            system("cls || clear");
            printf("n�o implementamos esse idioma ainda,selecione um dos abaixo\n\n");
        }
    } while (code < 1 || code > 3);
    system("cls || clear");
    switch (code)
    {
    case 1:
        printf("WELCOME");
        break;
    case 2:
        printf("BIENVENIDO");
        break;
    case 3:
        printf("ACCUEILLIR");
        break;
    }

    return 0;
}