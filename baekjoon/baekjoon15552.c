#include <stdio.h>

int main(void)
{
	int n;
	int num;
	int num1;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		scanf("%d", &num1);
		printf("%d\n", num + num1);
	}
}
