#include <stdio.h>
#include <string.h>
// #팰린드롬인지 확인하기
int	main(void)
{
	char	arr[101];
	int		len;
	int		i;
	char	*result;

	scanf("%s", arr);
	i = 0;
	len = strlen(arr);
	while (i <= len / 2)
	{
		if (arr[i] != arr[len - i - 1])
		{
			printf("0");
			return (0);
		}
		i++;
	}
	printf("1");
	return (0);
}
