/*
 * Question 47: Write a program to print the following pattern:
*
**
***
****
*****
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 47: Write a program to print the following pattern: * ** *** **** ***** */
int main(void) {
 for(int i=1;
i<=5;
i++){
for(int j=0;
j<i;
j++)putchar('*');
putchar('\n');
}
 return 0;
}
