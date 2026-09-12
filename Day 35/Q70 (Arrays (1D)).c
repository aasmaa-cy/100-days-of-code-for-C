/*
 * Question 70: Rotate an array to the right by k positions.
 */
#include <stdio.h>

int main(void)
{
    int n, k;
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 1;
    int a[100];
    for (int i = 0; i < n; i++) if (scanf("%d", &a[i]) != 1) return 1;
    if (scanf("%d", &k) != 1) return 1;
    k %= n;
    for (int r = 0; r < k; r++) { int last = a[n - 1]; for (int i = n - 1; i > 0; i--) a[i] = a[i - 1]; a[0] = last; }
    for (int i = 0; i < n; i++) printf("%d%c", a[i], i == n - 1 ? '\n' : ' ');
    return 0;
}
