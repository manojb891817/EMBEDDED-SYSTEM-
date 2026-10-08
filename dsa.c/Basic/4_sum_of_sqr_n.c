// sum of square natural number

#include <stdio.h>

int sumOfSquares(int n)
{
    int sum_of_sqr = (n * (n + 1) * (2 * n + 1)) / 6;

    return sum_of_sqr;
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", sumOfSquares(n));

    return 0;
}