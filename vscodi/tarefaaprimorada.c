#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//---------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
    // variable declaration-------
    float objetcprice;
    int option;
    float desconto;
    int parcelas;
    //----------------------------
    printf("digite o valor do produto: ");
    scanf("%f", &objetcprice);
    printf("\n\n1 para pagamento á vista e 2 para parcelado");
    printf("\ndigite a forma de pagamento: ");
    scanf("%i", &option);
    fflush(stdin);
    system("cls || flush");
    do
    {
        switch (option)
        {
        case 1:
            desconto = (objetcprice)*10 / 100;
            printf("valor do produto: %.2f", objetcprice);
            printf("\nopção de pagamento: á vista");
            printf("\nvalor do desconto: %.2f", desconto);
            printf("\nvalor a pagar: %.2f", objetcprice - desconto);
            break;
        case 2:
            printf("quantas parcelas deseja?: ");
            scanf("%i", &parcelas);
        }
        if ((option != 1) && (option != 2))
        {
            printf("\nnão temos esta opção digite denovo: ");
            scanf("%i", &option);
        }
        system("cls || clear");
    } while ((option != 1) && (option != 2));
    if (option == 2)
    {
        switch (parcelas)
        {
        case 1:
            printf("\nvalor do produto: %.2f", objetcprice);
            printf("\nopção de pagamento: parcelado");
            printf("\nnúmero de parcelas: %i", parcelas);
            printf("\nvalor das parcelas: %.2f", objetcprice / 1);
            break;
        case 2:
            printf("\nvalor do produto: %.2f", objetcprice);
            printf("\nopção de pagamento: parcelado");
            printf("\nnúmero de parcelas: %i", parcelas);
            printf("\nvalor das parcelas: %.2f", objetcprice / 2);
            break;
        case 3:
            printf("\nvalor do produto: %.2f", objetcprice);
            printf("\nopção de pagamento: parcelado");
            printf("\nnúmero de parcelas: %i", parcelas);
            printf("\nvalor das parcelas: %.2f", objetcprice / 3);
            break;
        case 4:
            printf("\nvalor do produto: %.2f", objetcprice);
            printf("\nopção de pagamento: parcelado");
            printf("\nnúmero de parcelas: %i", parcelas);
            printf("\nvalor das parcelas: %.2f", objetcprice / 4);
            break;
        case 5:
            printf("\nvalor do produto: %.2f", objetcprice);
            printf("\nopção de pagamento: parcelado");
            printf("\nnúmero de parcelas: %i", parcelas);
            printf("\nvalor das parcelas: %.2f", objetcprice / 5);
            break;
        case 6:
            printf("\nvalor do produto: %.2f", objetcprice);
            printf("\nopção de pagamento: parcelado");
            printf("\nnúmero de parcelas: %i", parcelas);
            printf("\nvalor das parcelas: %.2f", objetcprice / 6);
            break;
        default:
            printf("\nlimite de 6 parcelas excedido, transição cancelada, faça novamente: ");
        }
    }

    return 0;
}