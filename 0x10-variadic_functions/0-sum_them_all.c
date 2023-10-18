#include <stdio.h>
#include <stdarg.h>

/**
  *sum_them_all - givess the sum of integers passed in
  *@n: is the number of integers passed
  *Return: sum
  */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, j;

	unsigned int i;

	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		j = va_arg(nums, int);
		sum += j;
	}
	}
	va_end(nums);
	return (sum);
}
