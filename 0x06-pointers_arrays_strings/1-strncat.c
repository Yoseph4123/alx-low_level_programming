#include <stdio.h>
#include "main.h"
#include <string.h>

/**
  *_strncat - concates two strings. it will use at most n bytes from src; and
  *src does not need to be null-terminated if it contains n or more bytes.
  *@dest: is a pointer
  *@src: is a pointer
  *@n: is an integer
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
