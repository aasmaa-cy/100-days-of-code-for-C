/*
 * Question 125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
 */
#include <stdio.h>
int main(void){char line[512];FILE *fp=fopen("info.txt","a");if(fp==NULL)return 1;puts("Enter a line:");if(fgets(line,sizeof line,stdin)==NULL){fclose(fp);return 1;}fputs(line,fp);fclose(fp);puts("Line appended successfully.");return 0;}
