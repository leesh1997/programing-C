#include <stdio.h>

int main(void)
{
    char    s[101];
    int i;

    scanf("%s", s);
    i = 1;
    while(s[i])
    {
        i++;
    }
    printf("%d\n", i);
}