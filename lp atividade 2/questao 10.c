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
    int number;
    int numbertwo;
    char operation;
//--------------------------------
printf("digite um n�mero: ");
scanf("%i",&number);
system("cls || clear");
printf("digite outro n�mero: ");
scanf("%i",&numbertwo);
fflush(stdin);
system("cls || clear");
do
{
printf("qual opera��o quer fazer? (digite os simbolos): ");
scanf("%c",&operation);
switch (operation)
{
case 'x':
   printf("\n\nresultado: %i",number * numbertwo);
break;
case '/':
   printf("\n\nresultado: %i",number / numbertwo);
break;
case '-':
   printf("\n\nresultado: %i",number - numbertwo);
break;
case '+':
   printf("\n\nresultado: %i",number + numbertwo);
break;
default:
system("cls || clear");
printf("opera��o n�o valida\n\n");
    break;
}
} while (operation != 'x' && operation != '-' && operation != '+' && operation != '/');
    return 0;
}