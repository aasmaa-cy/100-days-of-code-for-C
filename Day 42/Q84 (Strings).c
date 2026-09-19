/*
 * Question 84: Convert a lowercase string to uppercase without using built-in functions.
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char s[1001];
    if (fgets(s, sizeof s, stdin) == NULL) return 1;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) putchar(toupper((unsigned char)s[i]));
    putchar('\n');
    return 0;
}
