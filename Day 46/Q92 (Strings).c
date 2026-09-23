/*
 * Question 92: Find the first repeating lowercase alphabet in a string.
 */
#include <stdio.h>

int main(void)
{
    char s[1001]; if(fgets(s,sizeof s,stdin)==NULL)return 1; int first=-1,f[26]={0}; for(int i=0;s[i]!='\0'&&s[i]!='\n';i++){if(s[i]>='a'&&s[i]<='z'){int k=s[i]-'a';f[k]++;if(f[k]==2&&first<0)first=i;}} if(first>=0)printf("%c\n",s[first]);else printf("-1\n");return 0;
}
