#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  *_strchr -  locates a character in a string
  *@s: is a pointer
  *@c: is character
  *Return: s
  */
char *_strchr(char *s, char c)
{
	char *i;

	i = strchr(s, c);
	return (i);
}
