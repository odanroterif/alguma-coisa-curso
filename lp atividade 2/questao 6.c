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
        printf("--------PRODUTOS--------");
        printf("\n\nDIGITE 1 para camisetas");
        printf("\nDIGITE 2 para calças");
        printf("\nDIGITE 3 para sapatos");
        printf("\n\ndigite o código do produto: ");
        scanf("%i", &code);
        if (code > 3 || code < 1)
        {
            system("cls || clear");
            printf("o item não existe,selecione um dos itens abaixo\n\n");
        }
    } while (code < 1 || code > 3);
    system("cls || clear");
    switch (code)
    {
    case 1:
        printf("produto: camiseta");
        printf("\nvalor: R$10,00");
        break;
    case 2:
        printf("produto: calças");
        printf("\nvalor: R$10,00");
        break;
    case 3:
        printf("produto: sapatos");
        printf("\nvalor: R$10,00");
        break;
    }

    return 0;
}