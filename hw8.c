#include <stdio.h>
#include <math.h>

double calculateStandardDeviation(double arr[], int n);

int main() {
    double numbers[5];

    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%lf", &numbers[i]);
    }

    double standardDeviation = calculateStandardDeviation(numbers, 5);
    printf("Standard Deviation = %.3lf\n", standardDeviation);

    return 0;
}

double calculateStandardDeviation(double arr[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    double mean = sum / n;

    double sumOfSquares = 0.0;
    for (int i = 0; i < n; ++i) {
        sumOfSquares += pow(arr[i] - mean, 2);
    }

    double variance = sumOfSquares / n;
    double standardDeviation = sqrt(variance);

    return standardDeviation;
}