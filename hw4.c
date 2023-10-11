#include <stdio.h>

int main(void)
{
	int count = 0;
	int a;

	printf("Please enter a number:");
	scanf_s("%d", &a);

	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
			count++;
	}
	if (count == 0)
		printf("it is a prime number");
	else
		printf("it is not a prime number");
	return 0;
}