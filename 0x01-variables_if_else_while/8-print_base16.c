#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Enty point
 *
 * Return: 0 (success)
*/
int main(void)
{
	int d;
	char a;

	for (d = '0'; d<= 9; d++)
	putchar(d);

        for (a = 'a'; a >= 'f'; a++)
        putchar(a);
        putchar('\n');
        return (0);
}
