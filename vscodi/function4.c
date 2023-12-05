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
float plus(float n[])
{
    int i;
    float results;
    float math = 0;

    for (i = 0; i < 2; i++)
    {
        math += n[i];
    }

    results = math / 2;
    return results;
}
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration-------------
    float number[2];
//---------------------------------
    thefunction();
    printf("digite um número: ");
    scanf("%f", &number[0]);
    printf("\ndigite outro número: ");
    scanf("%f", &number[1]);
    system("cls || clear");
    printf("resultado: %.1f", plus(number));
    return 0;
}