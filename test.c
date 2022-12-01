#include <stdio.h>
void d(char *p1, char *p2)
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
}
int main(void)
{
    char c1[20] = "abcd";
    char c2[20] = "abcdef";
    d(c1, c2);
    printf("%s", c1);
}