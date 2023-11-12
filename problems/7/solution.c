// https://projecteuler.net/problem=7  

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Calculate the nth prime
uint64_t solution(int n)
{
    // Intitialize a list of primes of size n
    uint64_t* primes = (uint64_t*)calloc(n, sizeof(uint64_t));
    primes[0] = 2;

    // Calculate the first n primes
    int num_primes = 1, a;
    for (uint64_t i = 3; num_primes < n; i += 2)
    {
        a = 0; // Did we break out of the loop?
        for (int j = 0; j < num_primes; j++)
        {
            if (i % primes[j] == 0)
            {
                // This is not a prime. Let's break out of the loop.
                a = 1;
                break;
            }
        }

        // If we didn't, then the number must be a prime. We should append in to the list of primes
        if (!a)
        {
            primes[num_primes] = i;
            num_primes++;
        }
    }

    uint64_t result = primes[n - 1];
    free(primes);

    return result;
}

int main(void)
{
    uint64_t s = solution(10001);
    printf("%lu\n", s);

    return 0;
}