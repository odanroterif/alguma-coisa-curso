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
    float wight;
    float hight;
};
//quando esta acima do main pode ser usado em qualquer função
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration------------
struct struct1 person; //struct struct1 = variavel com propriedades das variaveis dentro da struct
   /*char name[999];
   int age;*/
//--------------------------------
    printf("digite seu nome: ");
    gets(person.name);
    fflush(stdin);
    printf("\ndigite sua idade: ");
    scanf("%i",&person.age);
    printf("\ndigite seu peso: ");
    scanf("%f",&person.wight);
    printf("\ndigite sua altura: ");
    scanf("%f",&person.hight);
    system("cls || clear");
    printf("EXIBINDO DADOS ");
    printf("\n\nnome: %s",person.name);
    printf("\nidade: %i",person.age);
    printf("\npeso: %.2f",person.wight);
    printf("\naltura: %.2f",person.hight);
    return 0;
}