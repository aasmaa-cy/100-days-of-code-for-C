/*
 * Question 51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 51: Write a program to print the following pattern:     5    45   345  2345 12345 */
int main(void) {
 for(int i=5;
i>=1;
i--){
for(int j=0;
j<i-1;
j++)putchar(' ');
for(int j=i;
j<=5;
j++)printf("%d",j);
putchar('\n');
}
 return 0;
}
