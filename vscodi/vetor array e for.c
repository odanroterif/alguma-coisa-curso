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
    float note[5]; // com vetores/array o 0 também conta 3 = 0 1 2 (3 posições contando o 0)
    // []  <---- vetor/array
    int i;
    //--------------------------------
    for (i = 0; i < 5; i++)
    {
        printf("%i� nota: ", i + 1);
        scanf("%f", &note[i]); // o i é o contador para posição do vetor,agora o vetor é 0 porque o i é 0
                               // também
    }
    //formato abaixo realizado com while/do while.
    // do
    //{
    //printf("elemento %i", i + 1);
    //scanf("%i", &note[i]);
    //i++
    //} while (i != 5);
    //NOTAS UMA POR UMA NO LA�O FOR(pode ser feito em do while com modifica��o leve)
    //for ( i = 0; i < 5; i++)
   // {
   //  printf("\nnota: %.1f",note[i]);
    //}
    printf("\nnotas: %.1f|%.1f|%1.f|%.1f|%.1f",note[0],note[1],note[2],note[3],note[4]);
        return 0;
}