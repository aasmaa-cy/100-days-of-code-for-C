/*
 * Question 90: Toggle case of each character in a string.
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char s[1001]; if(fgets(s,sizeof s,stdin)==NULL)return 1; for(int i=0;s[i]!='\0';i++){unsigned char ch=(unsigned char)s[i]; if(isalpha(ch)) putchar(isupper(ch)?tolower(ch):toupper(ch)); else putchar(ch);} return 0;
}
