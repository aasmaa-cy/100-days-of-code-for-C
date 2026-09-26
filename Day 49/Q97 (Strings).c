/*
 * Question 97: Print the initials of a name.
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char s[1001]; if(fgets(s,sizeof s,stdin)==NULL)return 1; int newword=1;for(int i=0;s[i]!='\0'&&s[i]!='\n';i++){if(isalpha((unsigned char)s[i])){if(newword)putchar(toupper((unsigned char)s[i]));newword=0;}else if(s[i]==' '||s[i]=='\t')newword=1;}putchar('\n');return 0;
}
