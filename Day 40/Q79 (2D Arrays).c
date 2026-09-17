/*
 * Question 79: Perform diagonal traversal of a matrix.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r, c, x;
    if (scanf("%d %d", &r, &c) != 2 || r < 1 || c < 1 || r > 100 || c > 100) return 1;
    int a[100][100];
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) if (scanf("%d", &a[i][j]) != 1) return 1;
    for (int d = 0; d < r + c - 1; d++) for (int i = 0; i < r; i++) { int j = d - i; if (j >= 0 && j < c) printf("%d%c", a[i][j], d == r + c - 2 && i == r - 1 ? '\n' : ' '); }
    return 0;
}
