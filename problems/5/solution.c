// https://projecteuler.net/problem=5

#include <stdio.h>

uint64_t fact(unsigned int n)
{
	return (n > 1) ? n * fact(n - 1) : 1;
}

int64_t solution(int n)
{
	uint64_t a, i, j;
	for (i = n; i < fact(n); i += n)
	{
		a = 0;
		for (j = n - 1; j > 1; j--)
		{
			if (i % j != 0)
			{
				a = 1;
				break;
			}
		}
		if (!a) return i;
	}
	return -1;
}

int main()
{
	uint64_t s = solution(20);
	printf("%lu\n", s);

	return 0;
}


