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
    printf("1 para pagamento á vista e 2 para parcelado");
    printf("\ndigite a forma de pagamento: ");
    scanf("%i", &option);
    fflush(stdin);
    switch (option)
    {
    case 1:
        desconto = (objetcprice)*10 / 100;
        printf("valor a pagar: %.2f", objetcprice - desconto);
        break;
    case 2:
        printf("quantas parcelas deseja?: ");
        scanf("%i", &parcelas);
    default:
        printf("não temos esta opção");
        break;
    }
    if (option == 2)
    {
        switch (parcelas)
        {
        case 1:
            printf("valor das parcelas: %.2f", objetcprice / 1);
            break;
        case 2:
            printf("valor das parcelas: %.2f", objetcprice / 2);
            break;
        case 3:
            printf("valor das parcelas: %.2f", objetcprice / 3);
            break;
        case 4:
            printf("valor das parcelas: %.2f", objetcprice / 4);
            break;
        case 5:
            printf("valor das parcelas: %.2f", objetcprice / 5);
            break;
        case 6:
            printf("valor das parcelas: %.2f", objetcprice / 6);
            break;

        default:
            printf("\nlimite de 6 parcelas excedido, transição cancelada, faça novamente");
        }
    }
    return 0;
}