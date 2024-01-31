#include <stdio.h>

int	main(void)
{
	int	n, m;
	int sum, result = 0;
	int num[101] = {0,};
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum = num[i] + num[j] + num[k];
				if (sum > result && sum <= m)
					result = sum;
			}
		}
	}
	printf("%d\n", result);
}
