/*
 * Question 91: Remove all vowels from a string.
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char s[1001]; if(fgets(s,sizeof s,stdin)==NULL)return 1; for(int i=0;s[i]!='\0';i++){unsigned char ch=(unsigned char)s[i]; int c=tolower(ch); if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u')putchar(ch);}return 0;
}
