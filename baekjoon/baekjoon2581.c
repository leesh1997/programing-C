#include <stdio.h>

int	main()
{
	int	n, m;
	int	sum, flag;
	int	min;

	sum = 0;
	scanf("%d %d", &m, &n);
	min = 10001;
	if (m == 1)
	{
		m++;
	}
	for(int i = m; i <= n; i++)
	{
		flag = 0;
		for(int j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				flag = 1;
				break ;
			}
		}
		if (flag == 0)
		{
			if (min > i)
			{
				min = i;
			}
			sum += i;
		}
	}
	if (sum == 0)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n", sum);
		printf("%d\n", min);
	}
}