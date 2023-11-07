#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
//--------------------------------
int main (){
    setlocale (LC_ALL, "portuguese");
//variable declaration------------
int timestatus;
//--------------------------------
printf("selecione a temperatura do lugar para qual quer teleportar: ");
scanf("%i",&timestatus);
if (timestatus > 25)
{
    printf("\n\ndestino de viagem: clima quente/neutro/ensolarado");
} else if (timestatus < 15)
{
    printf("\n\ndestino de viagem: clima frio/chuvoso");
}  else if (timestatus > 15 && timestatus < 25)
{
    printf("\n\ndestino de viagem: clima nublado");
} 
return 0;
}