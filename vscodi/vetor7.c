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
    int number[10];
    int negative = 0;
    int plus = 0;
    int i;
//--------------------------------
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %iº número: ", i + 1);
        scanf("%i", &number[i]);
        if (number[i] >= 0)
        {
            plus += number[i];
        }
        else
        {
            negative++;
        }
        system("cls || clear");
    }
    printf("soma dos números positivos: %i", plus);
    printf("\nquantidade de números negativos: %i", negative);
    return 0;
}
  