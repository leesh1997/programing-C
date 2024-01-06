#include <stdio.h>

int	main(void)
{
	int	n, a;

	int result = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		int flag = 0;
		for (int j = 1; j <= a; j++)
		{
			if (a % j == 0)
			{
				flag++;
			}
		}
		if (flag == 2)
			result++;
	}
	printf("%d\n", result);
}