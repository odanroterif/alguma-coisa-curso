#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
// variable declaration----
    int number;
    int numbertwo;
    char option;
//------------------------
    printf("escolha um número: ");
    scanf("%i", &number);
    printf("escolha um número: ");
    scanf("%i", &numbertwo);
    fflush(stdin);
    printf("\nescolha um operador(+,-,x,/): ");
    scanf("%c", &option);
    switch (option)
    {
    case '+':
        printf("resultado: %i", number + numbertwo);
        break;
    case '-':
        printf("resultado: %i", number - numbertwo);
        break;
    case 'x':
        printf("resultado: %i", number * numbertwo);
        break;
    case '/':
        printf("resultado: %i", number / numbertwo);
        break;
    default:
        printf("o digito esta incorreto ou a operação não existe");
    }
    return 0;
}