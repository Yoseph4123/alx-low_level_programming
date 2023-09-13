#include "main.h"
/**
  *9-times_table - times table
  *
  *Return: absolute number
  */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * i;
			if (i == 0 || j == 0)
			{
				_putchar('0');
			}

			if (k < 10 && j != 0)
			{
				_putchar(44);
				_putchar(' ');
				_putchar(' ');
				_putchar(k + 48);
			}
			else if (k >= 10)
			{
				_putchar(44);
				_putchar(' ');
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
