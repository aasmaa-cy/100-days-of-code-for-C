#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 52: Write a program to print the specified grouped star pattern. */
int main(void) {
 int rows[]={
1,3,5,3,1
}
;
for(size_t i=0;
i<5;
i++){
for(int j=0;
j<rows[i];
j++)putchar('*');
putchar('\n');
}
 return 0;
}
