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
    int minage;
    int maxage=0;
    int count = 0;
    int endquest;
    float teammoney = 0;
    int generalcount = 0;
//------------------------------
    do
    {
        printf("c�digo | n�meros para iniciar pesquisa ou adicinar mais pessoas a pesquisa");
        printf("\n1      | adicionar/come�ar");
        printf("\n2      | encerrar/cancelar");
        printf("\ncome�ar pesquisa/inserir mais pessoas?: ");
        scanf("%i", &endquest);
        if (endquest != 1 && endquest != 2)
        {
            printf("n�o tem essa op��o digite novamente: ");
            scanf("%i", &endquest);
        }
        system("cls || clear");
        switch (endquest)
        {

        case 1:
            do
            {
                fflush(stdin);
                printf("F para f�minino e M para masculino");
                printf("\ndigite seu sexo: ");
                scanf("%c", &gender);
                gender = toupper(gender);
                if (gender != 'F' && gender != 'M')
                {
                    printf("afirma��o invalida, digite novamente: ");
                    scanf("%c", &gender);
                }
                system("cls || clear");
            } while (gender != 'F' && gender != 'M');
            do
            {
                fflush(stdin);
                printf("digite sua idade: ");
                scanf("%i", &age);
                if (age < 10)
                {
                    printf("essa idade esta fora da faixa de pesquisa,digite outra: ");
                    scanf("%i", &age);
                }
            } while (age < 10);
             if (age <= minage)
            {
                 minage = age;
            }
            else if (age > minage)
            {
                maxage = age;
            } if ( age == minage && maxage == 0 )
            {
                maxage = minage;
            }
            
            
           system("cls || clear");
            printf("qual o valor do seu s�lario?: ");
            scanf("%f", &money);
            teammoney += money;
            generalcount++;
            if (gender == 'F' && money > 5000)
            {
                count++;
            }
        case 2:
            break;
        }
        system("cls || clear");
    } while (endquest != 2);
    system("cls || clear");
    printf("m�dia salarial: %.2f", teammoney / generalcount);
    printf("\nmaior idade das pesquisados: %i", maxage);
    printf("\nmenor idade das pesquisados: %i", minage);
    printf("\nquantidade de mulheres com s�lario acima de R$5.000,00: %i", count);
    return 0;
}