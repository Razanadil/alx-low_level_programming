#include "main.h"
#include <stdlib.h>

/**
 * strlen - find length of string
 *  
 * @*s: string 
 *  
 * Return: size
 *  
 */
int _strlen(char *s)
{
        int size = 0;
        for (; s[size] != '\0'; size++);
       return (size);
       }
/**
 * str_concat - concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to newly allocated space in memory with content s! and s2
 * NULL on failure
 *
 */
char *str_concat(char *s1, char *s2)
{
        int size1;
       int size2;
int i;
char *a;
if (s1 == 0)
      size1 = "\0";
if (s2 == 0)
        size2 = "\0";
size1 = _strlen(s1);
size2 = _strlen(s2);
a = malloc((size1 + size2) * sizeof(char) + 1);
if (a == 0)
        return (0);
for (i = 0; i <= size1; i++)
{
if (i < size1)
a[i] = s1[i];
else
        a[i] = s2[i - size1];
}
a[i] = '\0';
return (a);
}
