#include <stdio.h>
/**
  *main - entry point
  *
  *Description: 'small letter'
  *
  *Return: always 0
  */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
