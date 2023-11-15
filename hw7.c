#include <stdio.h>

int main(void)
{
	printf("arr1: 1 2 3 4 5 6 \n");
	printf("arr2: 7 8 9 10 11 12 \n");

	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };

	int* p1 = &arr1;
	int* p2 = &arr2;
	int temp, i;


	for (i = 0; i < 6; i++)
	{
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		*p1++;
		*p2++;
	}

	printf("\nafter swap\n");
	printf("arr1: ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\narr2: ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
