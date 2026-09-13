/*
 * Question 72: Find the sum of all elements in a matrix.
 */
#include <stdio.h>

int main(void)
{
    int r, c, sum = 0, x;
    if (scanf("%d %d", &r, &c) != 2 || r < 1 || c < 1 || r > 100 || c > 100) return 1;
    for (int i = 0; i < r * c; i++) { if (scanf("%d", &x) != 1) return 1; sum += x; }
    printf("%d\n", sum);
    return 0;
}
