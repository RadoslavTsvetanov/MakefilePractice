#include "mystrings.h"
#include <stdio.h>
void main(int argc, char **argv)
{
    int br = 0;
    for (int i = 0; argv[i]; i++)
    {
        br++;
    }
    if (br > 2)
    {
        printf("error, too many arguments");
    }
    else if (br < 2)
    {
        printf("error, too few arguments ");
    }
    else
    {
        printf("%d", strLength(argv[1]));
    }
}