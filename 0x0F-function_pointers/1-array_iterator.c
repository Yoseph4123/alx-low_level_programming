#include <stdio.h>
#include "function_pointers.h"

/**
  *array_iterator - iterators an array of interges
  *@array: is array of integers
  *@size: is the size of the array
  *@action: is a function pointer
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
