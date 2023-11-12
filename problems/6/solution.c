// https://projecteuler.net/problem=6

#include <stdio.h>

int solution(int n)
{
	// Finding the sum of the squares of the first n natural numbers
	int s1 = 0;
	for (int i = 1; i <= n; i++)
	{
		s1 += i*i;
	}

	// Finding the square of the sum of the first n natural numbers
	int s2 = n * (n + 1) / 2;
	s2 *= s2;

	return s2 - s1;
}

int main(void)
{
	int s = solution(100);
	printf("%d\n", s);

	return 0;
}
