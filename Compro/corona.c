#include <stdio.h>
#include <string.h>
#include <ctype.h>

void swap(double *a, double *b){
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x, i=0, j=0, k=0;
    scanf("%d", &x);
    double y[x];
    for(i = 0; i < x; i++){
        scanf("%lf", &y[i]);
    }
    for(i=0; i<x; i++){
        for (j; i < x; j++)
        {
            if(y[i] > y[j]){
                swap(&y[i], &y[j]);
            }
        }
        
    }
    for(k=0; k<x; k++){
        printf("%.2f\n", y[x]);
    }
}