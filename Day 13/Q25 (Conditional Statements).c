/*
 * Question 25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %. */
int main(void) {
 long long a,b;
if(scanf("%lld %lld",&a,&b)!=2)return 1;
char op;
if(scanf(" %c",&op)!=1)return 1;
if((op=='/'||op=='%')&&b==0)return 1;
switch(op){
case '+':printf("%lld\n",a+b);
break;
case '-':printf("%lld\n",a-b);
break;
case '*':printf("%lld\n",a*b);
break;
case '/':printf("%lld\n",a/b);
break;
case '%':printf("%lld\n",a%b);
break;
default:return 1;
}
 return 0;
}
