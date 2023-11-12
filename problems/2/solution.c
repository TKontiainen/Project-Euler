// https://projecteuler.net/problem=2

#include <stdio.h>

int solution()
{
	int a = 1, b = 2, c;
	int sum = 0;

	while (b < 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		c = a + b;
		a = b;
		b = c;
	}

	return sum;
}

int main(void)
{
	printf("%d\n", solution());

	return 0;
}
