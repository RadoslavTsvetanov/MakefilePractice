#include "mystrings.h"
#include <stdio.h>
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
    else
    {
        printf("%d", strCompare(argv[1], argv[2]));
    }
}