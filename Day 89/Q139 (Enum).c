/*
 * Question 139: Show that enums store integers by printing assigned values.
 */
#include <stdio.h>
enum Number { ZERO, ONE, TWO, THREE };
int main(void){printf("%d %d %d %d\n",ZERO,ONE,TWO,THREE);return 0;}
