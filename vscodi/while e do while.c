#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//---------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
// varible declaration--------
    int nota;
//---------------------------
    //printf("digite sua nota: ");
    //scanf("%i", &nota);
    // while (nota < 0 || nota > 10)
    //{
    //  printf("nota invalida,digite novamente: ");
    //  scanf("%i",&nota);
    //  system("cls || flush");
    //}
    // printf("nota do aluno: %i",nota);
    do
    {printf("digite sua nota: ");
    scanf("%i", &nota);
        printf("nota invalida,digite novamente: ");
        scanf("%i", &nota);
        system("cls || flush");
    } while (nota < 0 || nota > 10);
    printf("nota do aluno: %i", nota);
    return 0;
}