int main(void)
{
	double km, miles;
	printf("Please enter kilometers: ");
	scanf("%lf", &km);
	miles = km * 0.6215;
	printf("%.1lf km is equal to %.1lf miles.\n", km, miles);

	return 0;
}