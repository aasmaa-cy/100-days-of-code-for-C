/*
 * Question 149: Use malloc() to allocate structure memory dynamically and print details.
 */
#include <stdio.h>
#include <stdlib.h>
struct Item { char name[50];int value; };
int main(void){struct Item *p=malloc(sizeof *p);if(!p)return 1;if(scanf("%49s %d",p->name,&p->value)!=2){free(p);return 1;}printf("%s %d\n",p->name,p->value);free(p);return 0;}
