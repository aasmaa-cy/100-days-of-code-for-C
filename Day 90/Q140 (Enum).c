/*
 * Question 140: Define a struct with enum Gender and print person's gender.
 */
#include <stdio.h>
#include <stdlib.h>
enum Gender { MALE, FEMALE, OTHER };
struct Person { char name[50]; enum Gender gender; };
int main(void){struct Person p;int g;if(scanf("%49s %d",p.name,&g)!=2||g<MALE||g>OTHER)return 1;p.gender=(enum Gender)g;const char *names[]={"Male","Female","Other"};printf("%s %s\n",p.name,names[(int)p.gender]);return 0;}
