#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array of integers
 * @array: the array of the integers
 * @size: the size of the array
 * @cmp: a pointer to the function to be used to compare values
 * return: If no element matches or  size <= 0, return -1
 * otherwise - the index of the first element for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
	return (-1);
	for (index = 0; index < size; index++)
	{
	if (cmp(array[index] != 0)
	return (index);
	}
	return (-1);
}
