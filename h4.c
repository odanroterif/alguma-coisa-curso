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
    int verefication[6] = {0,0,0,0,0,0};
    int cpf[6]={0,0,0,0,0,0};
    int i, j;
//--------------------------------
     for (i = 0; i < 6; i++)
    {
        printf("Cadastrar CPF do hóspede: ");
        scanf("%i", &cpf[i]);
        system("cls || clear");
        for (j = 0; j < i; j++) 
        {
            if (cpf[i] == verefication[j])
            {
                printf("CPF JÁ CADASTRADO, TENTE NOVAMENTE: ");
                scanf("%i", &cpf[i]);
                j = -1; 
                system("cls || clear");
            }
        }

        verefication[i] = cpf[i]; 
    }
printf("cpfs: ");
for ( i = 0; i < 6; i++)
{
    printf("\n%i",cpf[i]);
}
    return 0;
}