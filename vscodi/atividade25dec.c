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
   float money;
   int age;
   char gender;
   int minusage=0;
   int plusage=0;
   int count=0;
   int endquest;
//------------------------------
printf("1 para inciar 2 para cancelar");
printf("\ncomeçar pesquisa?: ");
scanf("%i",&endquest);
switch (endquest) {
do {


case 1:
    printf("F para fêminino e M para masculino");
    printf("\ndigite seu sexo: ");
    scanf("%c",&gender);
    gender = toupper(gender);
    fflush(stdin);
    printf("\ndigite sua idade: ");
    scanf("%i",&age);
    printf("\nqual o valor do seu sálario?: ");
    scanf("%f",&money);
    if (age < age)
    {
      minusage = age;
    } else if (age > age)
    {
        plusage = age;
    } if (gender == 'F' && money >= 3000)
    {
        count++;

    }
    break;
    printf("digite 1 para sim e 2 para não");
    printf("\nque inserir mas alguem na pesquisa?: ");
    scanf("%i",&endquest);
    
    

} while ( endquest == 2);


  
}
  return 0;
}