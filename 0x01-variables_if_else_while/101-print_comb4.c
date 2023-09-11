#include <stdio.h>
/**
  *main - main entry point
  *
  *Discription: 'smallest combination of three numbers in sequence'
  *
  *Return: always 0
  */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i < j)
			{
				for (k = 48; k <= 57; k++)
				{
					if (j < k)
					{
						putchar(i);
						putchar(j);
						putchar(k);
						if (i == 55 && j == 56 && k == 57)
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
			else
			{
				continue;
			}
		}
	}
	putchar('\n');
	return (0);
}
