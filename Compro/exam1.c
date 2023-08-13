#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(){
    char a[2001];
    int x = 0, i;
    scanf("%[^\n]", &a);
    for(i = 0; i < strlen(a); ++i){
        if(tolower(a[i]) == 'c' && tolower(a[i+1]) == 'a'
        && tolower(a[i+2]) == 't' && (i <= strlen(a)-3)){
            if(x){
                printf(", %d", i);
            }
            else{
                printf("%d", i);
                x = 1;
            }
        }
    }
    return 0;
}