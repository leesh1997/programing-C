#include <stdio.h>

int main(void)
{
    char    s[101];
    int     result[26] = {0,};
    int     index;

    for(int i = 0; i < 26; i++)
    {
        result[i] = -1;
    }
    scanf("%s", s);
    for(int i = 0; i < strlen(s); i++)
    {
        index = s[i] - 'a';
        if (result[index] == -1)
            result[index] = i;
        else
            continue;
    }

    for(int i = 0; i < 26; i++)
    {
        printf("%d\n", result[i]);
    }
}