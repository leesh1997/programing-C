#include <stdio.h>

int main(void)
{
    int n, m, i, j, k;
    int arr[101] = {0, };

    scanf("%d %d", &n, &m);

    for (int a = 0; a < m; a++)
    {
        scanf("%d %d %d", &i, &j, &k);
        for (int b = i; b <= j; b++)
        {
            arr[b] = k;
        }
    }

    for (int a = 1; a <= n; a++)
    {
        printf("%d ", arr[a]);
    }
}