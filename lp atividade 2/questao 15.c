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
    int option;
    int number;
    int results;
//--------------------------------
   do
   {
    printf("1- QUILOMETRO PARA MILHAS");
    printf("\n2- �C PARA �F");
    printf("\n0- ENCERRAR E SAIR\n\n");
    printf("escolha: ");
    scanf("%i",&option);
    if (option != 1 && option != 2)
    {
    system("cls || clear");
     printf("n�o temos essa op��o, selecione as abaixo\n\n");
    }
    system("cls || clear");
    switch (option)
    {
    case 1:
        printf("digite o n�mero de quilometros para a convers�o: ");
        scanf("%i",&number);
        results = number * 1609;
        system("cls || clear");
        printf("essa unidade em milha �: %i\n\n",results);
        break;
    
    case 2:
        printf("digite o n�mero de �C para a convers�o: ");
        scanf("%i",&number);
        results = (number * 1.8) + 32;
        system("cls || clear");
        printf("essa unidade em �F �: %i\n\n",results);
        break;
    
    }
   } while (option != 0);
   
    return 0;
}