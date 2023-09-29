#include "main.h"
#include <stdio.h>
/**
  *_puts_recursion - prints all cahrs in a string
  *@s: is a pointer
  *Return: void
  */
void _puts_recursion(char *s)
{
	int  i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s + 1);
}
