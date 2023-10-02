#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
    // variable declaration----
    char login[999];
    char senha[999];
    char loginT[999];
    char senhaT[999];
    //------------------------
    printf("crie um login: ");
    gets(login);
    fflush(stdin);
    printf("crie uma senha: ");
    gets(senha);
    fflush(stdin);
    system("cls || flush");
    printf("digite o login: ");
    gets(loginT);
    fflush(stdin);
    printf("digite a senha: ");
    gets(senhaT);
    system("cls || flush");
    if (strcmp(loginT, login) == 0 && strcmp(senhaT, senha) == 0) // strcmp: verificação/comparação  de  variaveis  
    {
        printf("bem-vindo");
    }
    else
    {
        printf("úsuario ou senha incorretos, acesso negado");
    }
    return 0;
}
