#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//------------------------------
int main(){
    setlocale(LC_ALL, "portuguese");
//variable declaration----------
char password[999];
char login[999];
char loginconfirm[999];
char key[999];
//------------------------------
printf("crie um nome de úsuario: ");
gets(login);
printf("crie uma senha: ");
gets(password);
system("cls || clear");
do
{
printf("digite seu nome de úsuario: ");
gets(loginconfirm);
fflush(stdin);
printf("digite sua senha: ");
gets(key);
system("cls || clear");
if (strcmp(loginconfirm,login) != 0 && strcmp(key,password) !=0)
{
    printf("TENTATIVA DE INVASÃO \nsenha ou login invalidos\n\n");
}
} while (strcmp(loginconfirm,login) != 0 || strcmp(key,password) !=0);
printf("bem-vindo úsuario %s",login);
    return 0;
}
    