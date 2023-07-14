#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: This is the length to allocate in the memory
 * @size: This is the size of casting to save
 *
 * Return: Pointer to the allocated memory.
 *         If nmemb or size is 0, then _calloc returns NULL
 *         If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *call;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = (nmemb * size);
	call = malloc(j);
	if (call == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		call[i] = 0;
	}
	return (call);
}
