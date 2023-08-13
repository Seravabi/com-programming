#include <stdio.h>
#include <math.h>


double ans(double i1, double i2);

int main() {
    int num, num2;
    scanf("%d %d", &num, &num2);
    printf("sqrt(%d^2+%d^2)=%.2lf", num,num2,ans(num,num2));
    return 0;
    }


double ans(double i1, double i2){
    double ans1 = sqrt(pow(i1, 2) + pow(i2, 2));
    return ans1;
}