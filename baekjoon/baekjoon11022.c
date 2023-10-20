#include <stdio.h>

int	main(void)
{
	int	n;
	int	a;
	int	b;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
}
