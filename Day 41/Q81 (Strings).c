/*
 * Question 81: Count characters in a string without using built-in length functions.
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1001];
    if (fgets(s, sizeof s, stdin) == NULL) return 1;
    size_t len = 0; while (s[len] != '\0' && s[len] != '\n') len++;
    printf("%zu\n", len);
    return 0;
}
