/*
 * Question 78: Find the sum of main diagonal elements for a square matrix.
 */
#include <stdio.h>

int main(void)
{
    int n, sum = 0, x;
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) { if (scanf("%d", &x) != 1) return 1; if (i == j) sum += x; }
    printf("%d\n", sum);
    return 0;
}
