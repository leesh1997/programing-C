#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	alpha[16];
	int	cnt = 0;

	scanf("%s", alpha);

	for (int i = 0; i < 16; i++)
	{
		if (alpha[i] >= 65 && alpha[i] <= 67)
			cnt += 3;
		else if (alpha[i] >= 68 && alpha[i] <= 70)
			cnt += 4;
		else if (alpha[i] >= 71 && alpha[i] <= 73)
			cnt += 5;
		else if (alpha[i] >= 74 && alpha[i] <= 76)
			cnt += 6;
		else if (alpha[i] >= 77 && alpha[i] <= 79)
			cnt += 7;
		else if (alpha[i] >= 80 && alpha[i] <= 83)
			cnt += 8;
		else if (alpha[i] >= 84 && alpha[i] <= 86)
			cnt += 9;
		else if (alpha[i] >= 87 && alpha[i] <= 90)
			cnt += 10;
	}
	printf("%d\n", cnt);
}