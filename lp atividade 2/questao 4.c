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
    int age;
//--------------------------------
    do
    {
        printf("digite sua idade: ");
        scanf("%i", &age);
        if (age >= 18)
        {
            printf("\n\nacesso permitido");
        }
        else
        {
            printf("\n\nacesso negado");
        }
    } while (age < 18);

    return 0;
}