#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - entry popint
  *
  *description: 'last intrger'
  *
  *Return: always 0
  */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0", n, ld);
	}
	else if (ld < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5", n, ld);
	}
	printf("\n");
	return (0);
}
