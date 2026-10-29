/*
 * Question 132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
 */
#include <stdio.h>
enum Light { RED, YELLOW, GREEN };
int main(void){int value;if(scanf("%d",&value)!=1||value<RED||value>GREEN)return 1;enum Light light=(enum Light)value;if(light==RED)puts("Stop");else if(light==YELLOW)puts("Wait");else puts("Go");return 0;}
