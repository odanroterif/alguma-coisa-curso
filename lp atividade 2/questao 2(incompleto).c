#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
    // variable declaration------------
    float sale;
    float price;
    int day;
    //--------------------------------
    do
    {
        printf("digite o valor de sua compra: ");
        scanf("%f", &price);
        if (price < 5)
        {
            system("cls || clear");
            printf("o número é muito pequeno para receber um desconto\n\n");
        }
    } while (price < 5);
    system("cls || clear");
    do
    {
        printf("digite um número equivalente ao dia de sua compra (domingo começando como 1): ");
        scanf("%i", &day);
        switch (day)
        {
        case 1:
            printf("domingo: desconto de 15 porcento \n");
            sale = price * (15 / 100);

            break;
        case 2:
            printf("segunda: desconto de 10 porcento");
            sale = price * (10 / 100);
            
            break;
        case 3:
            printf("terça: desconto de 10 porcento");
            sale = price * (10 / 100);
            
            break;

        case 4:
            printf("quarta: desconto de 10 porcento");
            sale = price * (10 / 100);
            
            break;

        case 5:
            printf("quinta: desconto de 10 porcento");
            sale = price * (10 / 100);
            
            break;

        case 6:
            printf("sexta: desconto de 10 porcento");
            sale = price * (10 / 100);
            
            break;
        case 7:
            printf("sábado: desconto de 15 porcento");
            sale = price * (15 / 100);
            

            break;
        default:
            system("cls || clear");
            printf("digito incorreto\n\n");
            break;
        }
    } while (day < 1 || day > 7);
    system("cls || clear");
    printf("valor do produto: %2.f", price);
    printf("\nvalor a pagar: %2.f", sale);
    return 0;
}