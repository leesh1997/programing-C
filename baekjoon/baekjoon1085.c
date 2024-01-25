#include <stdio.h>

int	main(void)
{
	int	x, y, w, h;
	int	min;

	min = 1002;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	if (x < min)
		min = x;
	if (w - x < min)
		min = w - x;
	if (y < min)
		min = y;
	if (h - y < min)
		min = h - y;
	printf("%d", min);
}