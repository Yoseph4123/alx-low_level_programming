#include <stdio.h>
#include "main.h"
/**
  *_pow_recursion - get the result for x the power of y
  *@x: is an integer
  *@y: is an integer
  *Return: x the power of y
  */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
		_putchar('\n');
	}
	else if (y == 1)
	{
		return (x);
		_putchar('\n');
	}
	else if (y < 0)
	{
		return (-1);
		_putchar('\n');
	}
	return (x * _pow_recursion(x, y - 1));
	_putchar('\n');
}
