/*
 * Question 69: Find the second largest element in an array.
 */
#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n < 2 || n > 100) return 1;
    int a[100];
    for (int i = 0; i < n; i++) if (scanf("%d", &a[i]) != 1) return 1;
    int largest = a[0], second = a[0];
    for (int i = 1; i < n; i++) { if (a[i] > largest) { second = largest; largest = a[i]; } else if (a[i] > second && a[i] != largest) second = a[i]; }
    printf("%d\n", second == largest ? -1 : second);
    return 0;
}
