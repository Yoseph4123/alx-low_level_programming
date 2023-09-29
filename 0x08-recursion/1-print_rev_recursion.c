#include "main.h"
#include <stdio.h>
/**
  *_print_rev_recursion - prints the reverse of a string
  *@s: is a pointer
  *Return: void
  */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
		i++;
	}
}
