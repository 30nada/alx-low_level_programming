#include "main.h"

/**
 * 1-isdigit -checks if character is a digit
 * @x: the number to be checked
 * Return: 1 for character that will be a digit or 0 for any else
*/
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	return (1);
	else
        return (0);
}
