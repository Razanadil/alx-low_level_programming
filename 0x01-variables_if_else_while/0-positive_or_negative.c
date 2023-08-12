#include <stdlib.h>
#include <time.h>
#include<stdio.h> 
/**
 * main - Entry point
 *
 * Return: o (success)
 */
int main(void)
{
	int n;

	srand(time(0));

        n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if(n>0)
               printf("is positive") ;
         Else if( n==0 )
                 printf("is zero"); 
             Else 
                  printf("is zero");
	return (0);
}

