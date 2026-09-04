/*
 * Question 54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 54: Write a program to print the following pattern:    *   ***  ***** *******  *****   ***    * */
int main(void) {
 for(int i=1;
i<=7;
i++){
int k=i<=4?i:8-i;
for(int j=0;
j<4-k;
j++)putchar(' ');
for(int j=0;
j<2*k-1;
j++)putchar('*');
putchar('\n');
}
 return 0;
}
