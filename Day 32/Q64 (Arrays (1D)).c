#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 64: Find the digit that occurs the most times in an integer number. */
int main(void) {
 char s[256];
int c[10]={
0
}
;
if(scanf("%255s",s)!=1)return 1;
for(size_t i=0;
s[i];
i++){
if(!isdigit((unsigned char)s[i]))return 1;
c[s[i]-'0']++;
}
int b=0;
for(int i=1;
i<10;
i++)if(c[i]>c[b])b=i;
printf("%d\n",b);
 return 0;
}
