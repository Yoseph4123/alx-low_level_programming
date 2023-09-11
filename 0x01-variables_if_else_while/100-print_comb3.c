#include <stdio.h>
/**
  *main - main entry point
  *
  *Description: 'smallest combination of two no'
  *
  *Return: always 0
  */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			else
			{
				continue;
			}
		}
	}
	putchar('\n');
	return (0);
}
