#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
// variable declaration----
    int optioncode;
//-------------------------
    printf("----+-+-+-+-+-+-+-----MENU-----+-+-+-+-+-+-+----");
    printf("\nc�digo            comida             valor");
    printf("\n  1              picanha            R$ 25,00");
    printf("\n  2              lasanha            R$ 20.00");
    printf("\n  3             strogonoff          R$ 18,00");
    printf("\n  4           bif� acebolado        R$ 15,00");
    printf("\n  5             p�o com ovo         R$  5,00");
    printf("\n\ndigite o c�digo da comida: ");
    scanf("%i", &optioncode);
    system("cls || flush");
    switch (optioncode)
    {
    case 1:
        printf("prato selecionado: picanha");
        printf("\nvalor a pagar: R$ 25,00");
        break;
    case 2:
        printf("prato selecionado: lasanha");
        printf("\nvalor a pagar: R$ 20,00");
        break;
    case 3:
        printf("prato selecionado: strogonoff");
        printf("\nvalor a pagar: R$ 18,00");
        break;
    case 4:
        printf("prato selecionado: bif� acebolado");
        printf("\nvalor a pagar: R$ 15,00");
        break;
    case 5:
        printf("prato selecionado: p�o com ovo");
        printf("\nvalor a pagar: R$ 5,00");
        break;

    default:
        printf("n�o servimos este prato aqui, digite outro c�digo de pedido.");
        break;
    }
    return 0;
}
