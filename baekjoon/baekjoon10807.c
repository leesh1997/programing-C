#include <stdio.h>

int main(void)
{
    int n;
    int cnt;
    int res;
    int arr[101];

    cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &res);
    for(int j = 0; j < n; j++)
    {
        if (arr[j] == res)
            cnt++;
    }
    printf("%d", cnt);
}