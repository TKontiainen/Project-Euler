// https://projecteuler.net/problem=1

#include <stdio.h>

int sum(int n, int d1, int d2)
{
	int s = 0;
	for (int i = 2; i < n; i++)
	{
		if (i % d1 == 0 || i % d2 == 0)
		{
			s += i;
		}
	}
	return s;
}

int main(void)
{
	int solution = sum(1000, 3, 5);
	printf("%d\n", solution);

	return 0;
}
