#include <stdio.h>

int main(void)
{
	int n, i;
	int j = 0;
	printf("Please enter a number: ");
	scanf("%d", &n);

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
			j++;
	}
	if (j == 1)
		printf("It is a prime number");
	else
		printf("It is not a prime number");
	return 0;
}