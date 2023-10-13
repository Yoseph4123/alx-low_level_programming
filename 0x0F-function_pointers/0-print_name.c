#include <stdio.h>

/**
  *print_name - prints name
  *@name: is a string of characters
  *@f: is a function pointer
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
