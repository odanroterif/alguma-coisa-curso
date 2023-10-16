#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//-----------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration----------
     int number;
     int par = 0;
     int impar = 0;
     int impcount = 0;
     int count = 0;
     int generalcount=0;
//-------------------------------
    do
    {
        printf("digite um número: ");
        scanf("%i", &number);
        if (number > 0) {
        if (number % 2 == 0)
        {
            par += number;
            count++;
            generalcount++;
        }
        else if (number % 2 != 0)
        {
            impar += number;
            impcount++;
            generalcount++;
        }
        }
        system("cls || clear");
    } while (number > 0);
    printf("quantidade de pares: %i", count);
    printf("\nquantidade de impares: %i", impcount);
    printf("\nmédia de pares: %i", par / count);
    printf("\nmédia geral não fracionada: %i", (impar + par) / generalcount);
    return 0;
}