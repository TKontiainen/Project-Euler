// https://projecteuler.net/problem=10

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint64_t solution(int n)
{
    int* primes = (int*)calloc(n+1, sizeof(int));
    primes[0] = 1;
    primes[1] = 1;

    for (int i = 2; i*i <= n; i++)
    {
        if (!primes[i])
        {
            for (int j = i*i; j < n; j += i)
            {
                primes[j] = 1;
            }
        }
    }

    uint64_t sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (!primes[i])
        {
            sum += i;
        }
    }
    return sum;
}

int main(void)
{
    uint64_t s = solution(2000000);
    printf("%lu\n", s);

    return 0;
}
