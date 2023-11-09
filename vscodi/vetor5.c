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
    int par = 0;
    int imp = 0;
//--------------------------------
    for (i = 0; i < 6; i++)
    {
        printf("digite o %i° número: ", i + 1);
        scanf("%i", &number[i]);
        system("cls || clear");
        if (number[i] % 2 == 0)
        {
            par++;
        }
        else 
        {
            imp++;
        }
    }
  printf("números digitados: ");
  printf("%i,%i,%i,%i,%i,%i",number[0],number[1],number[2],number[3],number[4],number[5]);
  printf("\nquantidade de pares: %i",par);
  printf("\nquantidade de impares: %i",imp);
    return 0;
}