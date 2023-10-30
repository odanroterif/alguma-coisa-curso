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
    int age;
//-------------------------------
do
{
 printf("digite sua idade: ");
 scanf("%i",&age);
 system("cls || clear");
 if (age < 0)
 {
    printf("IDADE INVALIDA, DIGITE NOVAMENTE\n\n");
 }
 
} while ( age < 0);
if (age < 18 || age >65)
{
    printf("\n\nnão é obrigado a votar");
} else {
    printf("\n\nvá votar!");
}
return 0;
}