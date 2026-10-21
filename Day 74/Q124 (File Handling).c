/*
 * Question 124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
 */
#include <stdio.h>
int main(void){char src[256],dst[256];if(scanf("%255s %255s",src,dst)!=2)return 1;FILE *in=fopen(src,"r"),*out=fopen(dst,"w");if(!in||!out){if(in)fclose(in);if(out)fclose(out);return 1;}int ch;while((ch=fgetc(in))!=EOF)fputc(ch,out);fclose(in);fclose(out);puts("Copied successfully.");return 0;}
