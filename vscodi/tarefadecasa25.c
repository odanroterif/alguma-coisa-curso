#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//-----------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
    // variable declaration----------
    float money;
    int age;
    char gender;
    int minusage = 0;
    int plusage = 0;
    int count = 0;
    int endquest;
    float teammoney;
    int generalcount;
    //------------------------------
    do
    {
        printf("1 para inciar 2 para cancelar");
        printf("\ncomeçar pesquisa/inserir mais pessoas?: ");
        scanf("%i", &endquest);
        if (endquest != 1 && endquest != 2)
        {
            printf("não tem essa opção digite novamente: ");
            scanf("%i", &endquest);
        }
         system("cls || clear");
        switch (endquest)
        {

        case 1:
        do
        {
              fflush(stdin);
            printf("F para fêminino e M para masculino");
            printf("\ndigite seu sexo: ");
            scanf("%c", &gender);
            gender = toupper(gender);
            if (gender != 'F' && gender != 'M')
            {
                printf("afirmação invalida, digite novamente: ");
                scanf("%c",&gender);
            }
        } while (gender != 'F' && gender != 'M');
        
          
            
            
            fflush(stdin);
            printf("digite sua idade: ");
            scanf("%i", &age);
            if (age < age)
            {
                minusage = age;
            }
            else if (age > age)
            {
                plusage = age;
            }
            printf("qual o valor do seu sálario?: ");
            scanf("%f", &money);
            teammoney += money;
            generalcount++;
            if (gender == 'F' && money >= 3000)
            {
                count++;
            }
        }
    } while (endquest != 2);

    return 0;
}