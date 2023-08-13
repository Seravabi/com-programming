#include "stdio.h"
#include "conio.h"
main()
{
    int a, b, c;
    float ans;
    clrscr();
    scanf("%d%d%d", &a, &b, &c);
    ans = (a+b+c)/3;
    printf("%f", ans);
}
