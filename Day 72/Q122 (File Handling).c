/*
 * Question 122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
 */
#include <stdio.h>
int main(void){FILE *fp=fopen("info.txt","r");char line[256];if(fp==NULL){puts("Error: unable to open info.txt");return 1;}while(fgets(line,sizeof line,fp)!=NULL)fputs(line,stdout);fclose(fp);return 0;}
