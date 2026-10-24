/*
 * Question 127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
 */
#include <stdio.h>
#include <ctype.h>
int main(void){FILE *in=fopen("input.txt","r"),*out=fopen("output.txt","w");if(!in||!out){if(in)fclose(in);if(out)fclose(out);return 1;}int ch;while((ch=fgetc(in))!=EOF)fputc(toupper((unsigned char)ch),out);fclose(in);fclose(out);return 0;}
