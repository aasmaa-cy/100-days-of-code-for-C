/*
 * Question 73: Find the sum of each row of a matrix and store it in an array.
 */
#include <stdio.h>

int main(void)
{
    int r, c;
    if (scanf("%d %d", &r, &c) != 2 || r < 1 || c < 1 || r > 100 || c > 100) return 1;
    int a[100][100];
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) if (scanf("%d", &a[i][j]) != 1) return 1;
    for (int i = 0; i < r; i++) { int sum = 0; for (int j = 0; j < c; j++) sum += a[i][j]; printf("%d%c", sum, i == r - 1 ? '\n' : ' '); }
    return 0;
}
