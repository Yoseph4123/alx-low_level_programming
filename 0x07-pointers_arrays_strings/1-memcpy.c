#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  *_memcpy - copies string
  *@dest: is a pointer
  *@src: is a pointer
  *@n: is unsigned integer
  *Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
