/*
 * Question 77: Check if the elements on the diagonal of a matrix are distinct.
 */
#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;
    int a[100][100];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (scanf("%d", &a[i][j]) != 1) return 1;
    int distinct = 1;
    for (int i = 0; i < n && distinct; i++) for (int j = i + 1; j < n; j++) if (a[i][i] == a[j][j]) distinct = 0;
    printf("%s\n", distinct ? "Yes" : "No");
    return 0;
}
