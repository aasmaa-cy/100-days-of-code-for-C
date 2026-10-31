/*
 * Question 134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
 */
#include <stdio.h>
enum Status { SUCCESS, FAILURE, TIMEOUT };
int main(void){int s;if(scanf("%d",&s)!=1||s<SUCCESS||s>TIMEOUT)return 1;if(s==SUCCESS)puts("Success");else if(s==FAILURE)puts("Failure");else puts("Timeout");return 0;}
