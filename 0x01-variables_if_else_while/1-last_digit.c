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
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is %d and is ", n, lastDigit);
	if (lastDigit > 5)
		printf("greater than 5\n");
	else if (lastDigit == 0)
		printf("0\n");
	else if (n < 6 || n != 0 )              
		printf("less than 6 but not 0\n");
	return (0);
}

