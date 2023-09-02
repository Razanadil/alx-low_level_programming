#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguements it receives
 *
 * @argc: arguement count
 * @argv: arguement array
 *
 * Description: print all arguements paased on a new line
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int r;
	for (r = 0;r < argc; r++) 
			printf("%s\n", argv[r]);
	return (0);
}
