/*
 * Question 136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
 */
#include <stdio.h>
enum Menu { ADD, SUBTRACT, MULTIPLY };
int main(void){int choice,a,b;if(scanf("%d %d %d",&choice,&a,&b)!=3||choice<ADD||choice>MULTIPLY)return 1;switch((enum Menu)choice){case ADD:printf("%d\n",a+b);break;case SUBTRACT:printf("%d\n",a-b);break;case MULTIPLY:printf("%d\n",a*b);break;}return 0;}
