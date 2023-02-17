#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main - to assign and print a random number to the variable n each time it is executed, either positive, negative or zero.
*
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if else
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
