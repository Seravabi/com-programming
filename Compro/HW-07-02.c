#include <stdio.h>
#include <math.h>

int main()
{
    int i1, i2;
    double pi = 3.141592653589793,degree_;
    scanf("%d %d", &i1, &i2);
    degree_ = (i1 * pi) / 180;
    printf("theta (degree) : %d\n", i1);
    printf("u (m/s) : %d\n", i2);
    printf("h (m) : %.4lf", (((i2 * i2) * ((sin(degree_) * sin(degree_)))) / (2 * (9.81))));
    return 0;
}
