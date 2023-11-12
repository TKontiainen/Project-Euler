// https://projecteuler.net/problem=3

#include <stdio.h>

int solution(long int n)
{
	int lpf = 1;

	int i = 2;
	while (n > 1)
	{
		if (n % i == 0)
		{
			n /= i;
			lpf = (i > lpf) ? i : lpf;
			continue;
		}
		i += 1;
	}

	return lpf;
}

int main(void)
{
	int s = solution(600851475143);

	printf("%d\n", s);

	return 0;
}
