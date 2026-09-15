/*
 * Question 76: Check if a matrix is symmetric.
 */
#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;
    int a[100][100];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (scanf("%d", &a[i][j]) != 1) return 1;
    int symmetric = 1;
    for (int i = 0; i < n && symmetric; i++) for (int j = 0; j < n; j++) if (a[i][j] != a[j][i]) symmetric = 0;
    printf("%s\n", symmetric ? "Yes" : "No");
    return 0;
}
