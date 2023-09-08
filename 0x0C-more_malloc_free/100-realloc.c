#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/*
 * _realloc - allocates amemory block using malloc and free
 *
 * @ptr: pointer to memory allocate
 * @old_size: size in bytes - of ptr allocate
 * @new_size: size in bytes of new memory block
 *
 * return: NULL if new_size = 0 and ptr is not NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
			return (NULL);
		}
	if (ptr == NULL)
	{
		p = malloc(new_size);
	       if (p == NULL)
	       return (NULL);
return (p);
}
if (new_size > old_size)
{
	p = malloc(new_size);
	if (p == NULL)
	return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	       *((char *)p + 1) = *((char *)ptr + 1);
free(ptr);
}
return (p);
}
