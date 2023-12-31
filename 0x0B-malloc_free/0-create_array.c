#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of array
 * @c: char to initialize array
 *
 * Return: NULL if size = 0, NULL if it fails
 * pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *n;
n = malloc(size * sizeof(char));
if (size == 0 || n == 0)
return (NULL);
while (size--)
n[size] = c;
return (n);
}
