/*
 * Question 148: Take two structs as input and check if they are identical.
 */
#include <stdio.h>
#include <string.h>
struct Data { int id;float value;char name[30]; };
int main(void){struct Data a,b;if(scanf("%d %f %29s",&a.id,&a.value,a.name)!=3)return 1;if(scanf("%d %f %29s",&b.id,&b.value,b.name)!=3)return 1;puts(a.id==b.id&&a.value==b.value&&strcmp(a.name,b.name)==0?"Identical":"Not Identical");return 0;}
