#include <stdio.h>
/**
  *main - entry point
  *
  *Description: 'small and capital letter'
  *
  *Return: always 0
  */
int main(void)
{
	int i = 97;
	int j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
