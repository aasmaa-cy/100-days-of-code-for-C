/*
 * Question 74: Find the transpose of a matrix.
 */
#include <stdio.h>

int main(void)
{
    int r, c;
    if (scanf("%d %d", &r, &c) != 2 || r < 1 || c < 1 || r > 100 || c > 100) return 1;
    int a[100][100];
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) if (scanf("%d", &a[i][j]) != 1) return 1;
    for (int i = 0; i < c; i++) { for (int j = 0; j < r; j++) printf("%d%c", a[j][i], j == r - 1 ? '\n' : ' '); }
    return 0;
}
