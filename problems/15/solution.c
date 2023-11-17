// https://projecteuler.net/problem=15

#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint64_t s = (uint64_t)39 * 37 * 33 * 31 * 29 * 23 * 20 * 7;

    printf("%lu\n", s);

    return 0;
}
