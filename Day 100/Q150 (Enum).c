/*
 * Question 150: Use pointer to struct to modify and display data using -> operator.
 */
#include <stdio.h>
struct Item { char name[50];int value; };
int main(void){struct Item item,*p=&item;if(scanf("%49s %d",p->name,&p->value)!=2)return 1;p->value*=2;printf("%s %d\n",p->name,p->value);return 0;}
