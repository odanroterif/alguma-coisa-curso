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
int plus(int n1, int n2)
{
    int results;
    results = n1 + n2;
    return results;
}
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration-------------
    int number[2];
//---------------------------------
    thefunction();
    printf("digite um número: ");
    scanf("%i", &number[0]);
    printf("\ndigite outro número: ");
    scanf("%i", &number[1]);
    system("cls || clear");
    printf("resultado: %i", plus(number[0], number[1]));
    return 0;
}