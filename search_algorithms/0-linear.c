#include "search_algos.h"

/**
 * linear_search:
 * @size:
 * @array:
 * @value:
 */

int linear_search(int *array, size, int vaue)

{
	int i;

	if (!array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Valvue checked array[%ld] = [%d]\n", i, array[i]);
		
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

