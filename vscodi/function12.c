#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
const int fix = 3;
void thefunction()
{
    printf("\n======================\n");
    printf("\tTAREFA");
    printf("\n======================\n");
}
float result(float n[])
{
    int i;
    float results;
    float math = 0;

    for (i = 0; i < fix; i++)
    {
        math += n[i];
    }

    results = math / fix;
    return results;
}
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration-------------
    float note[fix];
    int i;
//---------------------------------
    thefunction();
    for (i = 0; i < fix; i++)
    {
        do
        {
            printf("digite a %iº nota: ", i + 1);
            scanf("%f", &note[i]);
            system("cls || clear");
            if (note[i] < 0)
            {
                system("cls || clear");
                printf("NOTA INVALIDA\n\n");
            }
        } while (note[i] < 0);
    }
    printf("média: %.1f", result(note));
    if (result(note) >= 7)
    {
        printf("\n\nAPROVADO");
    }
    else
    {
        printf("\n\nREPROVADO");
    }
    return 0;
}
