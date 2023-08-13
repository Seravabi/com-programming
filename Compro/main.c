#include "stdio.h"
int main()
{
    char x;
    scanf("%c", &x);
    switch(x) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("The letter \'%c\' is a vowel.", x);
            break;
        default:
            printf("The letter \'%c\' is not a vowel.", x);
            break;
    }
}