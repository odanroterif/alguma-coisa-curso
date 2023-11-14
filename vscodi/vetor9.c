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
    int number[6];
    int i;
//--------------------------------
    for (i = 0; i < 6; i++)
    {
        do
        {
            printf("Digite pro %iº número(precisa ser par): ", i + 1);
            scanf("%i", &number[i]);
            system("cls || clear");
            if (number[i] < 0)
            {
                printf("TAMBÉM NÃO PODE SER NEGATIVO\n\n");
            }
        } while (number[i] % 2 != 0);
        system("cls || clear");
    }
    printf("ordem inversa dos números digitados: ");
    for (i = 6; i >= 0; i--) 
    {
        if (number[i] % 2 == 0)
        {
            printf("%i,", number[i]);
        }
    }
    return 0;
}