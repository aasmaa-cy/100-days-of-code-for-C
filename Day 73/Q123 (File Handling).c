/*
 * Question 123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
 */
#include <stdio.h>
#include <ctype.h>
int main(void){char filename[256];scanf("%255s",filename);FILE *fp=fopen(filename,"r");if(!fp)return 1;int ch,chars=0,words=0,lines=0,inword=0;while((ch=fgetc(fp))!=EOF){chars++;if(ch=='\n')lines++;if(isspace((unsigned char)ch)){inword=0;}else if(!inword){inword=1;words++;}}if(chars>0&&ch==EOF){/* no extra line */}fclose(fp);printf("Characters: %d\nWords: %d\nLines: %d\n",chars,words,lines);return 0;}
