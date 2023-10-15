#include <stdio.h>

int	main(void)
{
	int	n;
	int	num1;
	int	num2;
	
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &num1);
		scanf("%d", &num2);
		printf("Case #%d: %d\n", i, num1 + num2);
	}
}
