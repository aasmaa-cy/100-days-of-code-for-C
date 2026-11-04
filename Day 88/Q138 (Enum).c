/*
 * Question 138: Print all enum names and integer values using a loop.
 */
#include <stdio.h>
enum Color { RED=0, GREEN=1, BLUE=2 };
int main(void){const char *name[]={"RED","GREEN","BLUE"};for(int i=RED;i<=BLUE;i++)printf("%s %d\n",name[i],i);return 0;}
