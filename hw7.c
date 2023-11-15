#include <stdio.h>

int main(void)
{
	int a1[6] = { 1,2,3,4,5,6 };
	int a2[6] = { 7,8,9,10,11,12 };

	int* p1 = &a1;
	int* p2 = &a2;
	int temp, i;


	for (i = 0; i < 6; i++)
	{
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		*p1++;
		*p2++;
	}

	printf("after swap\n");
	printf("a1: ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", a1[i]);
	}
	printf("\na2: ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", a2[i]);
	}
	return 0;
}