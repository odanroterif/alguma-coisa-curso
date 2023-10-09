#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//-------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
// variable declaration-----
    int i;
    int selector;
//-------------------------
    printf("digite um número que gostaria de ver a tabuada: ");
    scanf("%i", &selector);
    system("cls || flush");
    printf("-TABUADA DO %i\n", selector);
    for (i = 1; i <= 10; i++)
    {
        printf("\n%i x %i= %i", selector, i, i * selector);
    }
    return 0;
}