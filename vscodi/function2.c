#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
void thefunction()
{
    printf("\n=====================\n");
    printf("\tSENAI");
    printf("\n=====================\n");
}
void thereturn(int pao, char tatu[]) // pode ter nomes de variaveis diferentes dos da função main
{
    printf("nome: %s", tatu);
    fflush(stdin);
    printf("\nidade: %i", pao);
}
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration-------------
    char name[999];
    int age;
//---------------------------------
    thefunction();
    printf("digite seu nome: ");
    gets(name);
    fflush(stdin);
    printf("digite sua idade: ");
    scanf("%i", &age);
    thefunction();
    thereturn(age, name);
    return 0;
}