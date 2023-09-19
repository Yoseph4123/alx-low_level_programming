#include <stdio.h>
#include "main.h"
/**
  *swap_int - swap two integers
  *@a: is an integer
  *@b: is an integer
  *Reteun: void
  */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
