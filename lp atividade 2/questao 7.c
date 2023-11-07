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
        printf("\n\n1- NEW GAME");
        printf("\n2- CONTINUE");
        printf("\n3- SETTINGS");
        printf("\n\ndigite o que quer fazer: ");
        scanf("%i", &code);
        if (code > 3 || code < 1)
        {
            system("cls || clear");
            printf("DIGITE DIREITO NOOB!!\n\n");
        }
    } while (code < 1 || code > 3);
    system("cls || clear");
    switch (code)
    {
    case 1:
        printf("novo save criado");
        break;
    case 2:
        printf("carregando....");
        break;
    case 3:
        printf("idioma");
        printf("áudio");
        printf("graficos");
        printf("controles");
        printf("FSR 2.0");
        break;
    }

    return 0;
}