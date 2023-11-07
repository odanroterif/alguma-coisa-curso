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
        printf("\n\nDIGITE 1 para inglês");
        printf("\nDIGITE 2 para espanhol");
        printf("\nDIGITE 3 para francês");
        printf("\n\ndigite o código do seu idioma: ");
        scanf("%i", &code);
        if (code > 3 || code < 1)
        {
            system("cls || clear");
            printf("não implementamos esse idioma ainda,selecione um dos abaixo\n\n");
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