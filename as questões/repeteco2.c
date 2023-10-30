#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//-------------------------------
int main(){
    setlocale(LC_ALL,"portuguese");
//variable declaration------------
 char name[999];
 char gender;
 int  birthyear;
//-------------------------------
printf("digite seu nome: ");
gets(name);
system("cls || clear");
do
{
printf("digite seu sexo: ");
scanf("%c",&gender);
gender = toupper(gender);
system("clear || cls");
if (gender != 'M' && gender != 'F')
{
printf("INVALIDO,DIGITE CORRETAMENTE\n\n");
}
} while (gender != 'M' && gender != 'F');
fflush(stdin);
printf("digite seu ano de nascimento: ");
scanf("%i",&birthyear);
system("cls || clear");
if (2023 - birthyear < 18)
{
printf("Não é possível realizar o cadastro, o (a) candidato (a) deve ter 18 anos ou mais.");
} else {
    printf("solicitação aceita");
}
return 0;
}