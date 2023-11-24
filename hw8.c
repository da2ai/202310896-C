#include <stdio.h>
#include <math.h>

double Standard_Deviation(double arr[], int n);

int main() {
    int n = 5;
    double numbers[5];
   
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &numbers[i]);
    }
   
    printf("Standard Deviation = %.3lf\n", Standard_Deviation(numbers, n));

    return 0;
}

double Standard_Deviation(double arr[], int n) {
    double sum = 0.0, mean, stddev = 0.0;

   
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    mean = sum / n;

    for (int i = 0; i < n; i++) {
        stddev += pow(arr[i] - mean, 2);
    }
    stddev = sqrt(stddev / n);

    return stddev;
}