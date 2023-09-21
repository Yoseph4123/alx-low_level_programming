#include <stdio.h>
#include "main.h"
#include <string.h>

/**
  *_strcat - concates two strings
  *@dest: is a pointer
  *@src: is a pointer
  *Return: dest
  */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
