#include "main.h"
/**
  *print_last_digit - print the last digit of an input
  *
  *@j: input number is an integer
  *
  *Return: absolute value
  */
int print_last_digit(int j)
{
	int i;

	i = j % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
			return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
