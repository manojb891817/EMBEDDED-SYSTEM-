// sum of fraction 
#include <stdio.h>

int gcd(int a, int b) {
    int v;
    while (b != 0) {
        v = a % b;
        a = b;
        b = v;
    }
    return a;
}

void Sum_fract(int a[2], int b[2], int result[2]) {
    int v, lcm, f1, f2;
    int o1 = a[1];
    int o2 = b[1];

    int x = o1, y = o2;

    // Find GCD of denominators
    while (y != 0) {
        v = x % y;
        x = y;
        y = v;
    }

    // Find LCM
    lcm = (o1 * o2) / x;

    // Calculate numerator parts
    f1 = a[0] * (lcm / o1);
    f2 = b[0] * (lcm / o2);

    // Add fractions
    result[0] = f1 + f2;
    result[1] = lcm;

    // Simplify the fraction
    int g = gcd(result[0], result[1]);
    result[0] /= g;
    result[1] /= g;
}

int main() {
    int a[2] = {1, 2};
    int b[2] = {3, 2};
    int result[2];

    Sum_fract(a, b, result);

    printf("[%d, %d]\n", result[0], result[1]);

    return 0;
}
