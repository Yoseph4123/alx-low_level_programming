#include "main.h"
/**
  *times_table - times table 9x9
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

			if ((k / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(k + 48);

				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
				if (j == 9)
					continue;
				_putchar(44);
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
