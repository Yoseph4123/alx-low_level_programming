#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  *_strstr - locates a substring
  *@i,haystack,needle: is a pointer
  *Return: i
  */
char *_strstr(char *haystack, char *needle)
{
	char *i;

	i = strstr(haystack, needle);
	return (i);
}
