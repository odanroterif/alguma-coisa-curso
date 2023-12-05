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
    printf("nome: %s", name);
    fflush(stdin);
    printf("\nidade: %i", age);
    return 0;
}
