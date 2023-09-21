#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  *reverse_array - reverse the order of the string
  *@n: is an integer
  *@a: is a pointer
  *Return: void
  */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[n];
		a[n] = a[i];
		a[i] = j;
	}
}
