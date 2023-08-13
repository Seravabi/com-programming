#include <stdio.h>
#include <ctype.h> 

double tofa(double i1);
double tocel(double i2);

int main() {
    double num;
    char c_f;
    scanf("%lf %c", &num, &c_f);
    c_f = tolower(c_f);
    if (c_f == 'c') {
        printf("%.2lf f",tofa(num));
    } else if (c_f == 'f') {
        printf("%.2lf c",tocel(num));
    }
    return 0;
}

double tofa(double i1){
    return 32 + i1 * (180.0/100.0);
}

double tocel(double i2){
    return (i2 - 32) / (180.0/100.0);
}
