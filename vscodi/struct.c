#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
struct struct1
{
    char name[999];
    int age;
};
//quando esta acima do main pode ser usado em qualquer função
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration------------
struct struct1 student; //struct struct1 = variavel com propriedades das variaveis dentro da struct
   /*char name[999];
   int age;*/
//--------------------------------
    printf("digite o nome do aluno: ");
    gets(student.name);
    fflush(stdin);
    printf("digite a idade do aluno: ");
    scanf("%i",&student.age);
    system("cls || clear");
    printf("exibindo dados: ");
    printf("\nidade: %i",student.age);
    printf("\nnome: %s",student.name);
    return 0;
}