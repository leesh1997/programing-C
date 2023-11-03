#include <stdio.h>

int main(void)
{
    int value;
    int max;
    int idx;

    max = 0;
    idx = 0;
    for(int i = 1; i <= 9; i++)
    {
        scanf("%d", &value);
        if (value > max)
        {
            max = value;
            idx = i;
        }
    }
    printf("%d\n%d\n", max, idx);
}