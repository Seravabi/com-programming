#include <stdio.h>
#include <ctype.h>

int main()
{
    char a[102], b[102];
    scanf("%[^\n]%[^\n]", a, b);
    int bbi = 1, i, j;
    int i, j;

    printf("*** Results ***\n");
    for (i = 0; a[i] != '\0'; i++){
        if (isupper(a[i]))
            printf("%c", (tolower(a[i])));
        else if (islower(a[i]))
            printf("%c", (toupper(a[i])));
        else
            printf("%c", a[i]);
    }
    printf("\n");
    for (j = 0; b[j] != '\0'; j++){
        if (isupper(b[j]))
            printf("%c", (tolower(b[j])));
        else if (islower(b[j]))
            printf("%c", (toupper(b[j])));
        else
            printf("%c", b[j]);
        
        if(tolower(a[j]) != tolower(b[j])){
            bbi = 0;
        }
    }

    printf("\n");
    if (i != j)
        bbi = 0;
    printf("***************\n");
    if (bbi == 1)
        printf("Both strings are the same.");
    else
        printf("Both strings are not the same.");
    return 0;
}