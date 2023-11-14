// https://projecteuler.net/problem=12

#include <stdio.h>
#include <stdint.h>

// Get the first triangle number to have over n divisors
uint64_t solution(unsigned int n)
{
    for (int i = 1; ; i++)
    {
        // Calculate the ith triangular number
        uint64_t num = (i * (i + 1)) / 2;
        
        // Calculate how many factors it has
        int factors = 0; 
        for (uint64_t j = 1; j*j <= num; j++)
        {
            if (num % j == 0) factors += 2;
        }

        if (factors > n) {
            return num;
        }

    }
    return 0;
}


int main(void)
{
    uint64_t s = solution(500);
    printf("%lu\n", s);

    return 0;
}

