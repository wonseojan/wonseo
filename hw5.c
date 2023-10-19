#include <stdio.h>
int solve(int num)
{
	if (num > 0)
	{
		solve(num / 2);
		printf("%d", num % 2);
	}
}
int main(void)
{
	int num2;
	printf("Please enter a number:");
	scanf_s("%d", &num2);

	if (num2 > 0)
	{
		solve(num2);
	}
	return 0;
}
