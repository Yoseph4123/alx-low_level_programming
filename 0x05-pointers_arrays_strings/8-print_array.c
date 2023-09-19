#include <stdio.h>
#include "main.h"
/**
  *print_array - prints n elements of an array of integers
  *@a: is a pointer
  *@n: is an integer
  *Return: void
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d", a[i]);
			printf(", ");
		}
	}
	printf("\n");
}
