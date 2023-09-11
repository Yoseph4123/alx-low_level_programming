#include <stdio.h>
/**
  *main - main entry point
  *
  *Description: 'combination of num in sequence'
  *
  *Return: always 0
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
