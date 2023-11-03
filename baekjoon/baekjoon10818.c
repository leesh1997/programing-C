#include <stdio.h>

int main(void)
{
    int n;
    int arr[1000001];

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max;
    int min;
    min = arr[0];
    max = arr[0];
    for(int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("%d %d", min, max);
}