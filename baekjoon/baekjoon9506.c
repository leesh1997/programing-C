#include <stdio.h>

int	main(void)
{
	int	n;
	int sum;

	scanf("%d", &n);
	while (n != -1)
	{
		sum = 0;
		for (int i = 1; i <= n / 2; i++)
		{
			if (n % i == 0)
				sum += i;
		}
		if (sum == n)
		{
			printf("%d = ", sum);
			for (int i = 1; i <= n / 2; i++)
			{
				if (n % i == 0)
				{
					if (i != n - i)
						printf("%d + ", i);
					else
						printf("%d", i);
				}
			}
			printf("\n");
		}
		else
		{
			printf("%d is NOT perfect.\n", n);
		}
		scanf("%d", &n);
	}
}