/*
 * Question 88: Replace spaces with hyphens in a string.
 */
#include <stdio.h>

int main(void)
{
    char s[1001]; if(fgets(s,sizeof s,stdin)==NULL)return 1;
    for(int i=0;s[i]!='\0';i++) putchar(s[i]==' '?'-':(unsigned char)s[i]); return 0;
}
