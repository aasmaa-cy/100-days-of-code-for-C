/*
 * Question 83: Count vowels and consonants in a string.
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char s[1001]; int vowels = 0, consonants = 0;
    if (fgets(s, sizeof s, stdin) == NULL) return 1;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) { int ch = tolower((unsigned char)s[i]); if (isalpha((unsigned char)ch)) { if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') vowels++; else consonants++; } }
    printf("Vowels = %d, Consonants = %d\n", vowels, consonants);
    return 0;
}
