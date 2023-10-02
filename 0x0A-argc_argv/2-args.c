#include <stdio.h>
/**
  *main - entry point
  *@avgc: is an integer
  *@avgv: is a string
  *Return: always 0 (sucess)
  */
int main(int avgc, char *avgv[])
{
	int i;

	for (i = 0; i < avgc; i++)
	{
		printf("%s\n", avgv[i]);
	}
	return (0);
}
