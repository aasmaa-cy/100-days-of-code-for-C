/*
 * Question 93: Check if two strings are anagrams of each other.
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[1001],b[1001]; if(fgets(a,sizeof a,stdin)==NULL||fgets(b,sizeof b,stdin)==NULL)return 1; size_t la=strcspn(a,"\n"),lb=strcspn(b,"\n"); if(la!=lb){puts("Not Anagram");return 0;} int f[256]={0}; for(size_t i=0;i<la;i++){f[(unsigned char)a[i]]++;f[(unsigned char)b[i]]--;} int ok=1;for(int i=0;i<256;i++)if(f[i])ok=0; puts(ok?"Anagram":"Not Anagram");return 0;
}
