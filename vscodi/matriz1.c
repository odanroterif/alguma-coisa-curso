#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration------------
    int number[2][2];
    int i;
    int j;
//--------------------------------
    for ( i = 0; i < 2; i++)
    {
      for ( j = 0; j < 2; j++)
      {
        printf("\nlinha %i,coluna %i: ",i+1,j+1);
        scanf("%i",&number[i][j]);
      }
    }
for ( i = 0; i < 2; i++)
    {
      for ( j = 0; j < 2; j++)
      {
        printf("\nlinha %i,coluna %i: %i",i+1,j+1,number[i][j]);
      }
    }
    return 0;
}