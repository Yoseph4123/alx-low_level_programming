#include "main.h"
/**
  *_isalpha - if input is a lowercase or uppercase returns 1, returns 0
  *otherwise.
  *
  *@c: The character in ACSII code
  *
  *Return: 1 for lowercase and uppercase .else 0
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
