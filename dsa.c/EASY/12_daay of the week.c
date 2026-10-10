
#include <stdio.h>

int main() {
    int d, m, y;
    int k, j, h;

    char *days[] = {
        "Saturday", "Sunday", "Monday",
        "Tuesday", "Wednesday", "Thursday", "Friday"
    };

    scanf("%d %d %d", &d, &m, &y);

    if (m < 3) {
        m = m + 12;
        y = y - 1;
    }

    k = y % 100;
    j = y / 100;

    h = (d + (13 * (m + 1)) / 5 + k
         + k / 4 + j / 4 + 5 * j) % 7;

    printf("%s\n", days[h]);

    return 0;
}
