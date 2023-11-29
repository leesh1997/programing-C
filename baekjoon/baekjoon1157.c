#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	arr[1000001];
	int		alpha[26] = {0,};
	int		max;
	int		len;
	char	ans;

	scanf("%s", arr);
	len = strlen(arr);
	max = 0;

	for (int i = 0; i < len; i++)
	{
		if(arr[i] >= 'a')
			alpha[arr[i] - 'a']++;
		else
			alpha[arr[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] == max)
			ans = '?';
		else if (alpha[i] > max)
		{
			max = alpha[i];
			ans = 'A' + i;
		}
	}
	printf("%c", ans);
}