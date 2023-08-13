#include <stdio.h>
#include <math.h>


int main() {
    double i1, i2;
    scanf("%lf %lf", &i1, &i2);
    double i3 = sqrt(pow(i1, 2) + pow(i2, 2));
    printf("Perimeter: %.2f\n", i1+i2+i3);
    printf("Area: %.2f", i2 * i1/ 2.0);
    return 0;
}

