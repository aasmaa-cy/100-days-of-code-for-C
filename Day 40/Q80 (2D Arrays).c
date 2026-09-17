/*
 * Question 80: Multiply two matrices.
 */
#include <stdio.h>

int main(void)
{
    int r1, c1, r2, c2;
    if (scanf("%d %d", &r1, &c1) != 2 || r1 < 1 || c1 < 1 || r1 > 100 || c1 > 100) return 1;
    int a[100][100], b[100][100], out[100][100] = {{0}};
    for (int i = 0; i < r1; i++) for (int j = 0; j < c1; j++) if (scanf("%d", &a[i][j]) != 1) return 1;
    if (scanf("%d %d", &r2, &c2) != 2 || r2 != c1 || r2 < 1 || c2 < 1 || r2 > 100 || c2 > 100) return 1;
    for (int i = 0; i < r2; i++) for (int j = 0; j < c2; j++) if (scanf("%d", &b[i][j]) != 1) return 1;
    for (int i = 0; i < r1; i++) for (int j = 0; j < c2; j++) for (int k = 0; k < c1; k++) out[i][j] += a[i][k] * b[k][j];
    for (int i = 0; i < r1; i++) { for (int j = 0; j < c2; j++) printf("%d%c", out[i][j], j == c2 - 1 ? '\n' : ' '); }
    return 0;
}
