#include<stdio.h>
/**
  *main - main entery point
  *
  *Return: always 0 (sucess)
  */
int main(void)
{
	printf("Size of a char: %lu bytes\n", sizeof(char));
	printf("Size of an int: %lu bytes\n", sizeof(int));
	printf("Size of an long  int: %lu bytes\n", sizeof(long int));
	printf("Size of an long long int: %lu bytes\n", sizeof(long long int));
	printf("Size of an float: %lu bytes", sizeof(float));
	return (0);
}
