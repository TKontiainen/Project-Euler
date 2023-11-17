// https://projecteuler.net/problem=14
// I know this solution is slow as hell but I don't care

#include <stdio.h>
#include <stdint.h>

uint64_t collatz_length(uint64_t n)
{
    uint64_t l = 1;

    while (n != 1)
    {
        l++;
        n = (n % 2) ? 3 * n + 1 : n / 2;
    }

    return l;
}

uint64_t solution(uint64_t n)
{
    uint64_t longest_number = 0;
    uint64_t longest_length = 0;

    for (uint64_t i = 1; i < n; i++)
    {
        uint64_t length = collatz_length(i);
        if (length > longest_length)
        {
            longest_number = i;
            longest_length = length;
        }
    }

    return longest_number;
}

int main(void)
{
    uint64_t s = solution(1000000);

    printf("%lu\n", s);

    return 0;
}
