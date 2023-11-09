#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
    // variable declaration------------
    float note[3]; // com vetores/array o 0 tamb�m conta 3 = 0 1 2 (3 posi��es contando o 0)
    // []  <---- vetor/array
    //--------------------------------
    printf("digite a 1� nota: ");
    scanf("%f", &note[0]);
    system("cls || clear");
    printf("digite a 2� nota: ");
    scanf("%f", &note[1]);
    system("cls || clear");
    printf("digite a 3� nota: ");
    scanf("%f", &note[2]);
    system("cls || clear");
    printf("MOSTRANDO AS NOTAS \n\n");
    printf(" 1� nota: %.1f", note[0]);
    printf("\n 2� nota: %.1f", note[1]);
    printf("\n 3� nota: %.1f", note[2]);
    return 0;
}