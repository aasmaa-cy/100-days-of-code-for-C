/*
 * Question 98: Print initials of a name with the surname displayed in full.
 */
#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s[1001]; if(fgets(s,sizeof s,stdin)==NULL)return 1; size_t len=strcspn(s,"\n"); int last=(int)len-1;while(last>=0&&(s[last]==' '||s[last]=='\t'))last--;int start=last;while(start>0&&s[start-1]!=' '&&s[start-1]!='\t')start--;int nwords=0;for(int i=0;i<(int)len;i++)if(isalpha((unsigned char)s[i])&&(i==0||isspace((unsigned char)s[i-1])))nwords++;int count=0;for(int i=0;i<(int)len;i++){if(isalpha((unsigned char)s[i])&&(i==0||isspace((unsigned char)s[i-1]))){if(i>=start&&i<len){for(int j=start;j<=last;j++)putchar(s[j]);break;}if(count>0)putchar(' ');putchar(toupper((unsigned char)s[i]));count++;}}putchar('\n');return 0;
}
