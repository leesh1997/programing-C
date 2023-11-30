#include <stdio.h>

int	main(void)
{
	char	subject[51];
	char	grade[3] = {0,};
	double	score;

	double	sum_score = 0.0;
	double	temp;
	double	res = 0.0;
	
	for(int i = 0; i < 20; i++)
	{
		scanf("%s %lf %s", subject, &score, grade);
		if (grade[0] == 'P')
			continue;
		sum_score += score;
		if (grade[0] == 'F')
			continue;
		if (grade[0] == 'A')
			temp = 4;
		else if (grade[0] == 'B')
			temp = 3;
		else if (grade[0] == 'C')
			temp = 2;
		else
			temp = 1;
		if (grade[1] == '+')
			temp += 0.5;
		res += score * temp;
	}
	printf("%lf\n", res / sum_score);
}