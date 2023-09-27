#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//------------------------
int main() {
    setlocale(LC_ALL, "portuguese");
//variable declaration----
int numero;
//------------------------
printf("digite um número: ");
scanf("%i",&numero);
system("cls || clear");
if( numero%2 == 0){
    printf("%i é um número par",numero);
} else{ 
printf("%i é um número impar",numero);
}
return 0;
}