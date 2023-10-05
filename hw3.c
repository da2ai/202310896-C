#include <stdio.h>

int main(void)
{
	int x , y, z;
	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 4 - x; y++)
		{
			printf(" ");
		}
		for (z = 0; z < x * 2 + 1; z++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}