#include <stdio.h>

long long int	facto(long long int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * facto(n - 1);
	}
}

int	main(void)
{
	long long int n;

	scanf("%lld", &n);
	printf("%lld", facto(n));
}