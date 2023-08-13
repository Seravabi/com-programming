#include <stdio.h>

double getValue();
double findMin(double array[], int size);
double findMax(double array[], int size);
double findAvg(double array[], int size);

int main() {
    int n;
    scanf("%d", &n);
    
    double array[n];
    for (int i=0; i<n; i++) {
        array[i] = getValue();
    }

    double min, max, avg;
    // call funcition
    min = findMin(array, n);
    max = findMax(array, n);
    avg = findAvg(array, n);

    //print
    printf("%d Values\n", n);
    printf("Min: %.3f\n", min);
    printf("Max: %.3f\n", max);
    printf("Avg: %.3f", avg);
}

double getValue() {
    double value;
    scanf("%lf", &value);
    return value;
}

double findMin(double array[], int size) {
    double num = array[0];
    //if num > array --> num is array
    for (int i = 0; i < size; i++) {
        if (num > array[i]) {
            num = array[i];
        }
    }
    return num;
}

double findMax(double array[], int size) {
    double num = array[0];
    // if num < array --> num is array
    for (int i = 0; i < size; i++) {
        if (num < array[i]) {
            num = array[i];
        }
    }
    return num;
}

double findAvg(double array[], int size) {
    double num = 0;
    //sum 
    for (int i = 0; i < size; i++) {
        num += array[i];
    }
    return num / size;
}