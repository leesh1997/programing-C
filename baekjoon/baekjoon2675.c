#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    int n;
    char    arr[1001];

    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        scanf("%s", arr);
        for(int j = 0; j < strlen(arr); j++)
        {
            for(int k = 0; k < n; k++)
                printf("%c", arr[j]);
        }
        printf("\n");
    }
}