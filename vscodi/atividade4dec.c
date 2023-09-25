#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <locale.h> 
//-------------------------
int main(){
setlocale(LC_ALL,"portuguese");
//variable declaration
    float primeiraNota;
    float segundaNota;
//--------------------------
printf("digite sua primeira nota: ");
scanf("%f",&primeiraNota);    
fflush(stdin);
printf("digite sua segunda nota: ");
scanf("%f",&segundaNota);
printf("\n \nnota 1: %.1f \n",primeiraNota);
printf("nota 2: %.1f \n",segundaNota);
printf("média: %.1f",(primeiraNota+segundaNota)/2);
return 0;    
}