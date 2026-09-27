/*
 * Question 100: Print all sub-strings of a string.
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1001]; if(fgets(s,sizeof s,stdin)==NULL)return 1; size_t len=strcspn(s,"\n"); for(size_t i=0;i<len;i++)for(size_t j=i;j<len;j++)for(size_t k=i;k<=j;k++)putchar(s[k]);putchar('\n');return 0;
}
