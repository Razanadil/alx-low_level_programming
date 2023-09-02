#include "main.h"
#include <stdio.h>
/*
 * main - print the name of the program, followed by a new line
 *
 * @argc: argument count 
 * @argv: argument array
 *
 * discription: prints the name of the program
 *
 * returns: 0 on success
 *
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

