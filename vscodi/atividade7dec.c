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
printf("digite um n�mero: ");
scanf("%i",&numero);
system("cls || clear");
if( numero%2 == 0){
    printf("%i � um n�mero par",numero);
} else{ 
printf("%i � um n�mero impar",numero);
}
return 0;
}