#include "main.h"
/**
  *print_sign - prints + if input is positive ,prints - if input is
  *and prints 0 if input is 0.
  *
  *@n: is an integer
  *
  *Return: 1 if input positive, -1 if input is negative ,0 if input is 0
  */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
