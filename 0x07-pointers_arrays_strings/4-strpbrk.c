#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  *_strpbrk - searches a string for any of a set of bytes
  *@s: is a pointer
  *@accept: is a pointer
  *Return: i
  */
char *_strpbrk(char *s, char *accept)
{
	char *i;

	i = strpbrk(s, accept);
	return (i);
}

