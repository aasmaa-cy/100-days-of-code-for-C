/*
 * Question 96: Reverse each word in a sentence without changing the word order.
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s[1001]; if(fgets(s,sizeof s,stdin)==NULL)return 1; int len=(int)strcspn(s,"\n"),start=0; for(int i=0;i<=len;i++){if(i==len||isspace((unsigned char)s[i])){for(int j=i-1;j>=start;j--)putchar(s[j]);if(i<len)putchar(s[i]);start=i+1;}}putchar('\n');return 0;
}
