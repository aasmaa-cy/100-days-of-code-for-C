/*
 * Question 85: Reverse a string.
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1001];
    if (fgets(s, sizeof s, stdin) == NULL) return 1;
    size_t len = strcspn(s, "\n"); for (size_t i = len; i > 0; i--) putchar((unsigned char)s[i-1]); putchar('\n');
    return 0;
}
