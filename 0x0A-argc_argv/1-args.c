#include <stdio.h>
/**
  *main - entry point
  *@argc: is an integer
  *@argv: is a string
  *Return: always 0 (sucess)
  */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
