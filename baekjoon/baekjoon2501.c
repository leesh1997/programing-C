#include <stdio.h>

int	main(void)
{
	int	n, k, cnt, flag;

	flag = 0;
	scanf("%d %d", &n, &k);
	cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i != 0)
			continue;
		else
		{
			cnt++;
			if (cnt == k)
			{
				printf("%d", i);
				flag = 1;
				break ;
			}
		}
	}
	if (flag == 0)
		printf("0");	
}