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
    char person[10][999];
    char quest;
    int count = 0;
    int i;
//--------------------------------
    do
    {
        printf("Deseja realizar cadastro?: ");
        scanf("%c", &quest);
        quest = toupper(quest);
        fflush(stdin);
        system("cls || clear");
        if (quest != 'N')
        {
            printf("digite seu nome: ");
        gets(person[count]);
        count++;
        }
        system("cls || clear");
    } while (count < 10 && quest != 'N');
    if (count == 10)
    {
    printf("LIMITE DE HOSPEDAGENS CHEGOU NA CAPACIDADE MÁXIMA\n\n");
    }
    printf("\nhospedes: ");
    for ( i = 0; i < count; i++)
    {
      printf("\n%s",person[i]);
    }
    return 0;
}