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
    int note;
    int plus= 0;
    int i;
    float result;
//--------------------------------
for ( i = 1; i <= 2; i++)
{
    printf("digite a %iº nota: ",i);
    scanf("%i",&note);
    plus+= note;
    system("cls || clear");
}
result = plus/2;
printf("média: %.1f",result);
    return 0;
}