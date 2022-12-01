#include <stdio.h>
#include "mystrings.h"
void main(int argc, char **argv)
{
    int br = 0;
    for (int i = 0; argv[i]; i++)
    {
        br++;
    }
    if (br > 3)
    {
        printf("error, too many arguments");
    }
    else if (br < 3)
    {
        printf("error, too few arguments");
    }
    else if (strLength(argv[1]) > 50)
    {
        printf("string too big");
    }
    else if (strLength(argv[2]) > 50)
    {
        printf("string too big");
    }
    else
    {
        strConcat(argv[1], argv[2]);
        for (int i = 0; argv[1][i] != '\0'; i++)
        {
            printf("%c", argv[1][i]);
        }
    }
}