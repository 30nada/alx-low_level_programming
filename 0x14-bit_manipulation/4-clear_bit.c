#include "main.h"
#include <stdio.h>

/**
 * clear_bit - prog sets the value of a bit to 0 at a given index.
 * @n: parameter
 * @index: index
 * Returns: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	return (-1);
	*n &= ~(1 << index);
	return (1);
}