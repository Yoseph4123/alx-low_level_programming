#include <string.h>
#include <stdio.h>
#include "main.h"
/**
  *_strcpy - copy string from anohter string
  *@dest: is a pointer
  *@src: is a pointer
  *Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
