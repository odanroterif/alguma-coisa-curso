#include <stdio.h>
#include <stdlib.h>
//-------------------
int main() {
    //variable declaration
    int idade = 20; //int= inteiro
    float peso = 89.2; // float = real
    char sexo = 'F' ; //char= caracter
    char nome [999] = "marta"; // o [ ] indica quantidade de caracteres esperados
    char sobrenome [999] = "tarde";
    float altura = 12.5;
//-------------------
    printf("idade: %i \n", idade); //no lugar de %i poderia ser %d (i= inteiro, d= décimal)
    printf("peso: %.2f \n", peso);  // f= float (aceita casa decimal)
    printf("altura: %.2f \n", altura);  // . e algum número antes do f = casas mostradas (ex: 0.1= 12.5, 0.3= 12.500...)
    printf("sexo: %c \n", sexo); // usar aspas simples ' no lugar da dupla "
    printf("nome completo: %s %s \n", nome,sobrenome); // usar aspas dupla ", em caso de muitos caracteres| s= cadeia de carater (usar quando a mais de um)
    return 0; 
}