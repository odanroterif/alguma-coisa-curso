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
        printf("Digite o %i� n�mero: ", i + 1);
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
    printf("soma dos n�meros positivos: %i", plus);
    printf("\nquantidade de n�meros negativos: %i", negative);
    return 0;
}
  