#include <stdlib.h>
#include <time.h>
#include <stdio.h> 

/**
 * main- Enty point 
 *
 * Description: true or false validation
 *
 * Return: 0 (success) 
*/
int main(void)
{
	int n;

	srand11(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is postive\n" , n);
	else if (n == 0)
                printf("%i is zero\n" , n);
	else (n < 0)
		 printf("%i is negative\n" , n);
	return (0);
}
