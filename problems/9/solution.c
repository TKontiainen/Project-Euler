// https://projecteuler.net/problem=9

#include <stdio.h>

int solution(int n)
{
    for (int a = 1; a < n; a++)
    {
        for (int b = 1; b < n; b++)
        {
            int c = n - a - b;
            if (a*a + b*b == c*c)
            {
                return a*b*c;
            }
        }
    }
    return -1;
}

int main()
{
    int s = solution(1000);
    printf("%d\n", s);

    return 0;
}

