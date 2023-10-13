#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"
/**
  *main : main entry point.
  *@argc: is an integer
  *@argv: is a pointer
  *Return: always 0
  */
int main(int argc, char **argv)
{

	int  a, b;

	if (argc != 4)
	{
		printf("Error\n");
		return (0);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
		return (0);
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
