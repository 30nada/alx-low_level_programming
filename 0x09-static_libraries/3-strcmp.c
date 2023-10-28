#include "main.h"

/**
 * _strcmp - compares pointer to two strings
 * @s1: apointer to the first string to be compared
 * @s2: a pointer to the second string to be compared
 * return: if str1 < str2, the negative difference of the unmatched characters
 * if str1 == str2, 0
 * if str1 > str2, the postive difference of the unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}

