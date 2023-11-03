#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - ...
 * @min: ...
 * @max: ...
 * return: integer value
 */
int *array_range(int min, int max)
{
	int *a;

	if (min > max)
	return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (a == NULL)
	return (NULL);
}
