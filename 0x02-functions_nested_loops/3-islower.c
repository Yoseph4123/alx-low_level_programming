#include "main.h"
/**
  *_islower - shows 1 if the input is a
  * lowercase character. Another cases, shows
  *0
  *Description: 'lower case'
  *@c: The character in ASCII code
  *Return: 1 if input is lower cade ,0 otherwishe
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
