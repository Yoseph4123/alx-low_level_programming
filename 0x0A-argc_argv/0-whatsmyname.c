#include <stdio.h>

int main(int avgc,char* avgv[])
{
	int i;
	for (i = 0;i < avgc;i++)
	{
		printf("%s\n", avgv[i]);
	}
	return 0;
}
