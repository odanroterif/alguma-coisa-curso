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
//--------------------------------
do
{system("cls || clear");
    printf("digite um número positivo maior que 0: ");
    scanf("%i",&number);
} while (number < 1);
if (number % 2 == 0 && number % number == 0)
{
    printf("\n\nnão é um número primo");
} else {
    printf("\n\n é um número primo");
}
    return 0;
}