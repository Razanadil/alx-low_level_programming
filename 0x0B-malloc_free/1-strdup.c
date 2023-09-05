#include "main.h"
#include <stdlib.h>
#include <stddef>

/**
 * _strdup - copies a string to a newly allocated space in memory
 *
 * @str: string to copy
 *
 * Return: NULL if str = NULL, NULL if insufficient is available
 * pointer to duplicated string
 *
 */
char *_strdup(char *str)
{
	char *s;
	int a;
	int b;
	if (str == NULL)
		return (NULL);
	for (; str[a] != '\0'; a++)
		s = malloc(a * sizeof(*str) + 1);
	if (s == NULL)
		return (NULL);
	else
	{
for (; b < a; b++)
	s[b] = str[a];
}
}
