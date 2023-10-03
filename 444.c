
#include<stdio.h>
int main(void)
{
    int num, num1;
    for (num = 0; num <= 5; num++)
    {
        for (num1 = 1; num1 <= 5 - num; num1++)
        {
            printf(" ");
        }
        for (num1 = 1; num1 <= 2 * num - 1; num1++)
        {
            printf("*");
        }
        printf("\n");
    }
	return 0;
}
