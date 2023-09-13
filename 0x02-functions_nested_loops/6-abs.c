#include "main.h"
/**
  *abs - absolute value of an integer
  *
  *@j: is an integer
  *
  *Return: always 0
  */
int _abs(int j)
{
	if (j < 0)
	{
		return (j * -1);
	}
	else
	{
		return (j);
	}
}
