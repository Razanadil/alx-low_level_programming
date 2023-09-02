#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * main - add positive number
 * @argc: argument count
 * @argv: argument array
 * discription: adds posetive numbers
 * return: o success 1 error
 */
int main(int argc, char *argv[])
{
int sum = 0;
char *c;
	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		       if (*c < '0' || *c > '9')
		       printf("error\n");
 return (1);
sum += atoi(argv[argc]);
}
printf("%d\n", sum);
return (0);
}
