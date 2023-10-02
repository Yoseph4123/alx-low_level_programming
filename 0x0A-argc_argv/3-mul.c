#include <stdio.h>
#include <stdlib.h>
/**
  *main - entrt point
  *@avgc: is an intrger
  *@avgv: is a string
  *Return: always 0 (sucess_
  */
int main(int avgc, char *avgv[])
{
	int i, sum = 1;

	if (avgc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < avgc; i++)
	{
		sum = sum * atoi(avgv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
