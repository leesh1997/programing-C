#include <stdio.h>

int main(void)
{
    int n, a;
    double arr[1001] = {0,};
    int max;
    double sum;
    double result;
    
    max = 0;
    sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        arr[i] = a;
        if (max < arr[i])
            max = arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        arr[i] = arr[i] / max * 100;
        sum += arr[i];
    }
    result = sum / n;
    printf("%f\n", result);
}