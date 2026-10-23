/*
 * Question 126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
 */
#include <stdio.h>
int main(void){char name[256],line[256];if(scanf("%255s",name)!=1)return 1;FILE *fp=fopen(name,"r");if(fp==NULL){puts("Error: file does not exist.");return 1;}while(fgets(line,sizeof line,fp))fputs(line,stdout);fclose(fp);return 0;}
