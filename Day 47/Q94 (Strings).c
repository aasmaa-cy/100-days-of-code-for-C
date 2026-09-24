/*
 * Question 94: Find the longest word in a sentence.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[1001]; if(fgets(s,sizeof s,stdin)==NULL)return 1; char word[1001],best[1001]={0}; size_t wi=0;for(int i=0;;i++){if(isalnum((unsigned char)s[i])||s[i]=='\''||s[i]=='-'){word[wi++]=(char)s[i];}else{word[wi]='\0';if(wi>strlen(best)){strcpy(best,word);}wi=0;if(s[i]=='\0'||s[i]=='\n')break;}} puts(best);return 0;
}
