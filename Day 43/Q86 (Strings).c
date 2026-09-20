/*
 * Question 86: Check if a string is a palindrome.
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1001];
    if (fgets(s, sizeof s, stdin) == NULL) return 1;
    size_t len = strcspn(s, "\n"); int ok=1; for (size_t i=0,j=len;i<j;i++,j--) if (s[i]!=s[j-1]) ok=0;
    printf("%s\n", ok ? "Palindrome" : "Not Palindrome");
    return 0;
}
