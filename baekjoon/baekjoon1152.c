#include <stdio.h>
#include <string.h>
// #단어의 개수

int main(void)
{
	int		i = 1;
	int		cnt = 0;
	char	arr[1000001];

	scanf("%[^\n]", arr); // 공백을 포함한 문자열 입력 받는 법
	if (arr[0] != ' ')
		cnt++;
	while (arr[i])
	{
		if (arr[i - 1] == ' ' && arr[i] != ' ')
		{
			cnt++;
		}
		i++;
	}
	printf("%d\n", cnt);
	return (0);
}