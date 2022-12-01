#include "mystrings.h"
#include <stdio.h>
int strCompare(char *str1, char *str2)
{
    int first = -1, equal = 0, second = 1;
    int longer;
    if (strLength(str1) > strLength(str2))
    {
        longer = strLength(str1);
    }
    else
    {
        longer = strLength(str2);
    }
    for (int i = 0; i < longer; i++)
    {
        if (str1[i] < str2[i])
        {
            return first;
        }
        else if (str1[i] > str2[i])
        {
            return second;
        }
    }
    return equal;
}
int strLength(char *str)
{
    int br = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        br += 1;
    }
    return br;
}
void strConcat(char *p1, char *p2)
{
    int size1 = 0;
    for (int i = 0; p1[i] != '\0'; i++)
    {
        size1 += 1;
    }
    int size2 = 0;
    for (int i = 0; p2[i] != '\0'; i++)
    {
        size2 += 1;
    }
    for (int i = size1, j = 0; i < size1 + size2; i++, j++)
    {
        p1[i] = p2[j];
    }
    p1[size1 + size2] = '\0';
}