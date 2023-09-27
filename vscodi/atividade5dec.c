#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//------------------------
int main()
{
    setlocale(LC_ALL," ");
    // variable declaration----
    int numero;
    //------------------------
    printf("digite um numero: ");
    scanf("%i", &numero);
    if (numero > 10)
    {
        printf("\n \n %i maior que 10 ", numero);
    }
     if (numero < 10) 
    {
        printf("\n \n %i menor que 10 ", numero);
    }
     if (numero == 10) // = <---atribuição, equivale ao -> do visualG, == é o = em programação, != é diferente
    {
        printf("\n \n digitou o numero 10");
    }
    return 0;
}