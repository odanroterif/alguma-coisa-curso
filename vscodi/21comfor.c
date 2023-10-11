#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//---------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
// variable declaration--------
    int i;
    float number;
    float two;
    float media;
//-----------------------------
    for (i = 1; i <= 2; i++)
    {
        do
        {
            printf("digite a %iº nota: ", i);
            scanf("%f", &number);
        } while (number < 0 || number > 10);
        two += number;
        media = two / i;
    }
    system("cls || flush");
    printf("média: %.1f", media);
    return 0;
}