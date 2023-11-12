// https://projecteuler.net/problem=4

#include <stdio.h>
#include <stdlib.h>

int is_palindrome(int n)
{
	int* digits = (int*)calloc(10, sizeof(int));

	// get the digits of n
	int num_digits = 0;
	while (n > 0)
	{
		digits[num_digits] = n % 10;
		n /= 10;
		num_digits++;
	}

	// check for palindrome
	for (int i = 0; i < num_digits / 2; i++)
	{
		if (digits[i] != digits[num_digits-1-i])
		{
			free(digits);
			return 0;
		}
	}

	free(digits);
	return 1;
}

int solution()
{
	for (int a = 999; a > 900; a--)
	{
		for (int b = a; b > 900; b--)
		{
			int p = a * b;
			if (is_palindrome(p))
			{
				return p;
			}
		}
	}
	return -1;
}

int main(void)
{
	int s = solution();
	printf("%d\n", s);

	return 0;
}

