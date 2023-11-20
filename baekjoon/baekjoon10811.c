#include <stdio.h>

int main(void)
{
    int n, m;
    int a, b;
    int arr[101] = {0,};

    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    for(int i = 1; i <= m; i++)
    {
        scanf("%d %d", &a, &b);
        for(int j = a - 1; j < b; j++)
        {
            int temp = arr[j];
            arr[j] = arr[b - 1];
            arr[b - 1] = temp;
            b--;
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}