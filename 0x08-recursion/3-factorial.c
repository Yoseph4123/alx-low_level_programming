#include <stdio.h>
#include "main.h"
/**
  *factorial - gets the facortial of a number
  *@n: is an integer
  *Return: facorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
		_putchar('\n');
	}
	else if (n == 0)
	{
		return (1);
		_putchar('\n');
	}
	return (n * factorial(n - 1));
}
