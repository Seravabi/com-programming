#include <stdio.h>

int check(int i3);

int main(){
    int i1;
    scanf("%d",&i1);
    printf("method = %d", check(i1));
}

int check(int i3){
    if(i3 == 1 || i3 == 2){
        return i3;
    }
    return check(i3-1) + check(i3-2);
}