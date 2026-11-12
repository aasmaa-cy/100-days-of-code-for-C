/*
 * Question 146: Create Employee structure with nested Date structure for joining date and print details.
 */
#include <stdio.h>
struct Date { int day,month,year; };
struct Employee { char name[50]; int id; struct Date joining; };
int main(void){struct Employee e;if(scanf("%49s %d %d %d %d",e.name,&e.id,&e.joining.day,&e.joining.month,&e.joining.year)!=5)return 1;printf("%s %d %02d/%02d/%04d\n",e.name,e.id,e.joining.day,e.joining.month,e.joining.year);return 0;}
