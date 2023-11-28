#include <stdio.h>
// #상수

void	swap_num(char *a)
{
	char	temp;

	temp = a[0];
	a[0] = a[2];
	a[2] = temp;
}

int	ctoi(char *a)
{
	int num;

	num = (a[0] - '0') * 100 + (a[1] - '0') * 10 + (a[2] - '0');
	return (num);
}

int	main(void)
{
	char	a[1001];
	char	b[1001];

	scanf("%s", a);
	scanf("%s", b);

	swap_num(a);
	swap_num(b);
	int anum = ctoi(a);
	int bnum = ctoi(b);
	if (anum > bnum)
		printf("%d\n", anum);
	else
		printf("%d\n", bnum);
	return (0);
}