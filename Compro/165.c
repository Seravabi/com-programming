#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;
double calculateDistance(Point p1, Point p2){
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}
int main(){
    Point p1, p2;
    double ans;
    scanf("%lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y);
    ans =  calculateDistance(p1, p2);
    printf("Distance between two points (x1,y1) and (x2,y2) : %.2lf", ans);
    return 0;
}
