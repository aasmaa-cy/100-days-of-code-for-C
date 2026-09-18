/*
 * Question 82: Print each character of a string on a new line.
 */
#include <stdio.h>

int main(void)
{
    char s[1001];
    if (fgets(s, sizeof s, stdin) == NULL) return 1;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) printf("%c\n", s[i]);
    return 0;
}
