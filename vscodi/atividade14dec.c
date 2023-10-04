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
    printf("\ncódigo            comida             valor");
    printf("\n  1              picanha            R$ 25,00");
    printf("\n  2              lasanha            R$ 20.00");
    printf("\n  3             strogonoff          R$ 18,00");
    printf("\n  4           bifé acebolado        R$ 15,00");
    printf("\n  5             pão com ovo         R$  5,00");
    printf("\n\ndigite o código da comida: ");
    scanf("%i", &optioncode);
    system("cls || flush");
    switch (optioncode)
    {
    case 1:
        //strcpy(resultado,"prato selecionado: picanha\nvalor a pagar: R$25,00")<-- forma alternativa com variavel
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
        printf("prato selecionado: bifé acebolado");
        printf("\nvalor a pagar: R$ 15,00");
        break;
    case 5:
        printf("prato selecionado: pão com ovo");
        printf("\nvalor a pagar: R$ 5,00");
        break;

    default:
        printf("não servimos este prato aqui, digite outro código de pedido.");
        break;
    }
    return 0;
}
