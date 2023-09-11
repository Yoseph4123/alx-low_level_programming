#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *
 *discription: 'check for no if its positive or negative'
 *
 *Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d  is negative", n);
	}
	else if (n > 0)
	{
		printf("%d is positive", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	printf("\n");
	return (0);
}
