#include <stdio.h>
#include <string.h>
//Lab 08-04 Word separation
int main()
{
    char x[150];
    int numword=0, n=0;
    scanf("%[^\n]", &x);
    for (int i = 0; i<strlen(x); i++){
        if(x[i] == ' '){
            numword += 1;
        }
    }
    printf("%d words\n----\n", numword+1);
    for (int i = 0; i<strlen(x); i++){
        if(x[i] != ' '){
            printf("%c", x[i]);
            n += 1;
        }else{
            printf(" : %d\n", n);
            n = 0;
        }
    }
    printf(" : %d\n", n);
}