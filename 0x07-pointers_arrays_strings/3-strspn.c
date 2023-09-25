#include <string.h>
#include "main.h"
#include <stdio.h>
/**
  *_strspn -  gets the length of a prefix substring
  *@s: is a pointer
  *@accept: is a pointer
  *Return: i
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = strspn(s, accept);
	return (i);
}
