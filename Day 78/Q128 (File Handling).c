/*
 * Question 128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
 */
#include <stdio.h>
#include <ctype.h>
int main(void){char name[256];if(scanf("%255s",name)!=1)return 1;FILE *fp=fopen(name,"r");if(!fp)return 1;int ch,v=0,c=0;while((ch=fgetc(fp))!=EOF){int x=tolower((unsigned char)ch);if(isalpha((unsigned char)x)){if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')v++;else c++;}}fclose(fp);printf("Vowels: %d\nConsonants: %d\n",v,c);return 0;}
