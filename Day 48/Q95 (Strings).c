/*
 * Question 95: Check if one string is a rotation of another.
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[1001],b[1001]; if(fgets(a,sizeof a,stdin)==NULL||fgets(b,sizeof b,stdin)==NULL)return 1; size_t la=strcspn(a,"\n"),lb=strcspn(b,"\n"); if(la!=lb){puts("No");return 0;}a[la]='\0';b[lb]='\0';char d[2002];strcpy(d,a);strcat(d,a);puts(strstr(d,b)?"Yes":"No");return 0;
}
