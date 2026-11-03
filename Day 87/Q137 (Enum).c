/*
 * Question 137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
 */
#include <stdio.h>
enum Role { ADMIN, USER, GUEST };
int main(void){int r;if(scanf("%d",&r)!=1||r<ADMIN||r>GUEST)return 1;if(r==ADMIN)puts("Administrator");else if(r==USER)puts("Regular User");else puts("Guest");return 0;}
