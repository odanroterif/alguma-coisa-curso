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
    for (i = 10; i >= 1; i--)
    {
        printf("\n%i",i);
    }
    return 0;
}