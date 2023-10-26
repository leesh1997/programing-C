#include <stdio.h>

int	main(void)
{
	int	A;
	int	B;
	
	while (1)
	{
		scanf("%d", &A);
		scanf("%d", &B);
		if (A == 0 && B == 0)
			break ;
		printf("%d\n", A+B);
	}
}
