#include <stdio.h>

int main(void)
{
    int arr[10];
    int A, cnt, result;

    result = 0;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &A);
        arr[i] = A % 42;
    }
    for(int i = 0; i < 10; i++)
    {
        cnt = 0;
        for(int j = i + 1; j < 10; j++)
        {
            if(arr[i] == arr[j])
            {
                cnt++;
            }
        }
        if(cnt == 0)
            result++;
    }
    printf("%d\n", result);
}