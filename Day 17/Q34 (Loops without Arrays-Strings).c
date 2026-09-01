#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
/* Question 34: Write a program to check if a number is prime. */
int main(void) {
 long long n;
if(scanf("%lld",&n)!=1)return 1;
if(n<2){
puts("Not prime");
return 0;
}
for(long long i=2;
i<=n/i;
i++)if(n%i==0){
puts("Not prime");
return 0;
}
puts("Prime");
 return 0;
}
