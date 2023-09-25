#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//--------------------------
// variable declaration
int main()
{
    int idade;
    float peso;
    char sexo;
    char nome[999];
    char sobrenome[999];
//---------------------------
    printf("digite sua idade: ");
    scanf("%i", &idade); // &: transfere o que foi digitado em scanf para linhas futuras
    printf("digite seu peso: ");
    scanf("%f", &peso); 
    printf("informe seu sexo: ");
    fflush(stdin); //limpa o chace de imput (padrão de entrada)
    scanf("%c", &sexo); 
    fflush(stdin); //limpa o chace de imput (padrão de entrada)
    printf("digite seu nome: "); //foi usado outro fflush pela mudança do comando de leitura
    gets(nome);
    fflush(stdin);
    printf("digite seu sobrenome: "); //foi usado outro fflush pela mudança do comando de leitura
    gets(sobrenome);
    //nome[strcspn(nome,"\n")] = 0; //evita que o fgets pule linhas e fique esteticamente melhor
    //gets(nome); <-- é mais curto,mas buga alguns números em caso de overflow
    //scanf("%s", &nome);
    //fgets(nome, 250, stdin); <- lê mais carcteres até o limite determinado não importa se for dado espaço
    system("cls || clear"); // ||= ou, cls= limpatela para windows, clear= limpatela para linux e mac
    //cls e clear juntos caso não saiba em qual sistema seu programa funcionara
    printf("\n \nidade: %i \n", idade); // mensagem a ser exibida ápos o clear
    printf("peso: %.2f \n", peso); 
    printf("sexo: %c \n", sexo); 
    printf("nome completo : %s %s", nome,sobrenome); 
    return 0;
}