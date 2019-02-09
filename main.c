#include <stdio.h>

int triangle(int n) {
    if (n == 0) {
        return n;
    } else {
        return n + triangle(n - 1);
    }
}

int gauss(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;

    printf("Input: ");
    scanf("%d", &n);

    printf( "The triangular is made up of %d numbers\n", gauss(n));

    return 0;
}
