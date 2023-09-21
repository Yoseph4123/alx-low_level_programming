#include <stdio.h>
#include "main.h"
#include <string.h>

/**
  *_strncpy - copys a string up to the nth char
  *@dest: is a pointer
  *@src: is a pointer
  *@n: is an integer
  *Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
