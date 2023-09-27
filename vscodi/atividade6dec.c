#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//------------------------
int main(){ 
setlocale(LC_ALL,"portuguese");
//variable declaration----
char nome[999];
int idade;
float notaum;
float notadois;
float notatreis;
//-------------------------
printf("digite seu nome completo: ");
gets(nome);
fflush(stdin);
printf("digite sua idade: ");
scanf("%i",&idade);
fflush(stdin);
printf("digite a primeira nota: ");
scanf("%f",&notaum);
printf("digite a segunda nota: ");
scanf("%f",&notadois);
printf("digite a terceira nota: ");
scanf("%f",&notatreis);
system("cls || clear");
printf("nome do aluno: %s \n",nome);
printf("média: %.1f",(notaum + notadois + notatreis)/3);
if((notaum + notadois + notatreis)/3 < 7) {
    printf("\n \nreprovado");
} else {
    printf("\n \naprovado");
}
return 0;
}
    