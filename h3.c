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
    char alphabet[26][10][999];
    char name[10][999];
    char single[10];
    char order[26][10][999];
    int i, j;
//--------------------------------
    for (i = 0; i < 10; i++)
    {
        printf("digite seu nome: ");
        gets(name[i]);
        scanf("%c", &single[i]);
        single[i] = toupper(single[i]);
        switch (single[i])
        {
        case 'A':
            strcpy(alphabet[0][i], name[i]);
            break;
        case 'B':
            strcpy(alphabet[1][i], name[i]);
            break;
        case 'C':
            strcpy(alphabet[2][i], name[i]);
            break;
        case 'D':
            strcpy(alphabet[3][i], name[i]);
            break;
        case 'E':
            strcpy(alphabet[4][i], name[i]);
            break;

        case 'F':
            strcpy(alphabet[5][i], name[i]);
            break;

        case 'G':
            strcpy(alphabet[6][i], name[i]);
            break;
        case 'H':
            strcpy(alphabet[7][i], name[i]);
            break;
        case 'I':
            strcpy(alphabet[8][i], name[i]);
            break;
        case 'J':
            strcpy(alphabet[9][i], name[i]);
            break;

        case 'K':
            strcpy(alphabet[10][i], name[i]);
            break;

        case 'L':
            strcpy(alphabet[11][i], name[i]);
            break;

        case 'M':
            strcpy(alphabet[12][i], name[i]);
            break;

        case 'N':
            strcpy(alphabet[13][i], name[i]);
            break;

        case 'O':
            strcpy(alphabet[14][i], name[i]);
            break;

        case 'P':
            strcpy(alphabet[15][i], name[i]);
            break;

        case 'Q':
            strcpy(alphabet[16][i], name[i]);
            break;

        case 'R':
            strcpy(alphabet[17][i], name[i]);
            break;

        case 'S':
            strcpy(alphabet[18][i], name[i]);
            break;

        case 'T':
            strcpy(alphabet[19][i], name[i]);
            break;

        case 'U':
            strcpy(alphabet[20][i], name[i]);
            break;

        case 'V':
            strcpy(alphabet[21][i], name[i]);
            break;

        case 'W':
            strcpy(alphabet[22][i], name[i]);
            break;

        case 'X':
            strcpy(alphabet[23][i], name[i]);
            break;

        case 'Y':
            strcpy(alphabet[24][i], name[i]);
            break;

        case 'Z':
            strcpy(alphabet[25][i], name[i]);
            break;
        }
        system("cls || clear");
    }
    printf("---LISTA DE HOSPEDES---\n\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 26; j++)
        {
            if (strlen(alphabet[j][i]) > 0)
            {
                printf("%s\n", alphabet[j][i]);
            }
        }
    }
    return 0;
}