#include <stdio.h>

int main(void)
{
    int n;
    char arr[101] = {0,};
    int sum;

    sum = 0;
    scanf("%d", &n);
    scanf("%s", arr);
    for(int i = 0; i < n; i++)
    {
        sum += arr[i] - '0';
    }
    printf("%d\n", sum);
}