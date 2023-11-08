#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) 
{
    int num[5];
    int num1 = 0;
    int num2 = 0;

    printf("Please input five integers:");

    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &num[i]);
    }

    printf("Odd numbers: ");
    for (int i = 0; i < 5; i++) {
        if (num[i] % 2 != 0) {
            printf("%d ", num[i]);
            num2++;
        }
    }

    printf("\neven numbers:");
    for (int i = 0; i < 5; i++) {
        if (num[i] % 2 == 0) {
            printf("%d ", num[i]);
            num1++;
        }
    }

    return 0;
}