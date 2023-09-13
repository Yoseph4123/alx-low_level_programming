#include "main.h"
/**
  *print_alphabet_x10 - prints alphabet
  *
  *Return: always 0
  */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		int j = 97;

		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
	}
}
