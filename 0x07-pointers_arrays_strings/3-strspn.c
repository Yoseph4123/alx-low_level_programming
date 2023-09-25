#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  *_strspn - gets the length of a prefix substring
  *@i: is unsugned integer
  *@s: is a pointer
  *@accept: is a pointer
  *Return: s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = strspn(s  accept);
	return (i);
}
