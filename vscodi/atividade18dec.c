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
    for (i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            printf("\n%i", i);
        }
    }

    return 0;
}