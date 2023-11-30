#include <stdio.h>

int	main(void)
{
	int	n;
	int	arr[26] = {0,};
	char	s[101];
	int	j, flag;
	int	res = 0;

	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%s", s);
		for(int k = 0; k < 26; k++)
			arr[k] = 0;
		j = 1;
		flag = 1;
		while (s[j])
		{
			if (arr[s[j] - 'a'])
			{
				flag = 0;
				break ;
			}
			if (s[j] != s[j - 1])
			{
				++arr[s[j - 1] - 'a'];
			}
			j++;
		}
		res += flag;
	}
	printf("%d\n", res);
}