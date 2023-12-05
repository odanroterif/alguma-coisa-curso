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
void math(int number)
{
    int i;
    
    for (i = 1; i <= 10; i++)
    {
        printf("\n%ix%i = %i",number,i,(number*i));
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
    system("cls || clear");
    printf("TABUADA DO %i",number);
    math(number);
    return 0;
}