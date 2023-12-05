#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
void thefunction()
{
    printf("\n======================\n");
    printf("\tTAREFA");
    printf("\n======================\n");
}
void verification(int number)
{
    if (number % 2 == 0)
    {
        printf("\n\nPAR");
    }
    else
    {
        printf("\n\nIMPAR");
    }
}
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration-------------
    int number;
//---------------------------------
    thefunction();
    printf("digite um número: ");
    scanf("%i", &number);
    verification(number);
    return 0;
}