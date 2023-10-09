#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//-------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
// variable declaration-----
    int i;

//-------------------------
    printf("-TABUADA DO 5\n");
    for (i = 1; i <= 10; i++)
    {
        printf("\n5 x %i= %i", i, i * 5);
    }
    printf("\n\n-TABUADA DO 7\n");
    for (i = 1; i <= 10; i++)
    {
        printf("\n7 x %i= %i ", i, i * 7);
    }

    return 0;
}
//forma alternativa
//for (j = 3; j <= 7; j+=2){
//for (i = 1; i <= 10; i++) {
//printf("%i x %i= %i\n", j,i,j*i);
//}
//}
//int j;
//isso mostrara as 3 tabuadas de 3 5 e 7