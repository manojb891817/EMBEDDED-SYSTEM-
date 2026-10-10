#include<stdio.h>
#include <stdlib.h>
char* decToBinary(int n) {
    char *binary = malloc(33 * sizeof(char));
    if (binary == NULL) {
        return NULL;
    }
    int i = 0;
    if (n == 0) {
        binary[i++] = '0';
    }
    while (n > 0) {
        binary[i++] = (n % 2) + '0';
        n = n / 2;
    }
    binary[i] = '\0';
    // Reverse the string
    for (int j = 0; j < i / 2; j++) {
        char temp = binary[j];
        binary[j] = binary[i - 1 - j];
        binary[i - 1 - j] = temp;
    }
    return binary;
}
int main() {
    int n;
    scanf("%d", &n);
    char *result = decToBinary(n);
    if (result != NULL) {
        printf("%s\n", result);
        free(result);
    }
    return 0;
}
