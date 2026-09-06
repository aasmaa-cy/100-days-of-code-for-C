#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 50: Write a program to print the following pattern: *****  ****   ***    **     * */
int main(void) {
 for(int i=5;
i>=1;
i--){
for(int j=0;
j<5-i;
j++)putchar(' ');
for(int j=0;
j<i;
j++)putchar('*');
putchar('\n');
}
 return 0;
}
