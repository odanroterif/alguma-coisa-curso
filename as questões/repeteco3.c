#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//-------------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration-----------
    int i;
    int number;
    int par=0;
    int imp=0;
//-------------------------------
    for (i = 1; i <= 6; i++)
    {
        printf("digite o %iº número: ", i);
        scanf("%i", &number);
        do
        {
            if (number < 0)
            {
                printf("\n\nnão pode ser menor que 0, digite novamente: ");
                scanf("%i", &number);
            }
            system("cls || clear");
        } while (number < 0);
          if (number%2 == 0)
          {
            par++;
          } else {
            imp++;
          }
           
    }
    printf("pares: %i", par);
    printf("\nimpares: %i", imp);
    return 0;
}