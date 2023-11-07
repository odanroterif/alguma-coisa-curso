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
printf("digite um número: ");
scanf("%i",&number);
system("cls || clear");
printf("digite outro número: ");
scanf("%i",&numbertwo);
fflush(stdin);
system("cls || clear");
do
{
printf("qual operação quer fazer? (digite os simbolos): ");
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
printf("operação não valida\n\n");
    break;
}
} while (operation != 'x' && operation != '-' && operation != '+' && operation != '/');
    return 0;
}