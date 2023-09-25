#include <string.h>
#include "main.h"

/**
  *_memset - fills memory with a constant byte
  *@s: is a pointer
  *@b: is a character
  *@n: is unsingned integer
  *Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s , b , n);
		return(s);
}
