/*
 * Question 89: Count frequency of a given character in a string.
 */
#include <stdio.h>

int main(void)
{
    char s[1001], ch; if(fgets(s,sizeof s,stdin)==NULL)return 1; if(scanf(" %c",&ch)!=1)return 1; int count=0; for(int i=0;s[i]!='\0'&&s[i]!='\n';i++)if(s[i]==ch)count++; printf("%d\n",count); return 0;
}
