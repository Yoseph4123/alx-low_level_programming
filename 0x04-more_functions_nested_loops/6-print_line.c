#include <stdio.h>
#include "main.h"
/**
  *print_line - print a black line
  *
  *@n: is an integer
  *Return: void
  */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i <= 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}

