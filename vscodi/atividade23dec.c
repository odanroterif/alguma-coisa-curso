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
    int number;
    int result=0;
    char answer[999];
    int count=0;   
//------------------------------
//answer = toupper(answer);
do
{
    printf("digite um número: ");
    scanf("%i",&number);
    if (number >= 0)
    {
    result += number;
    count++; 
    }
    fflush(stdin);
    printf("deseja inserir mais um?: ");
    gets(answer);
    system ("cls || clear");
} while (strcmp(answer,"sim") == 0);
printf("\no total dos números digitados é %i,esta é a média: %i",result,result/count);
return 0;
}