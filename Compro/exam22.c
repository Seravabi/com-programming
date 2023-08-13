// #include<stdio.h>

// int main(){
//     int i=1;
//     float a[]={};
//     scanf("%f", &a[i]);
//     printf("%.2f", a[i]);
// }
#include<stdio.h>

main()
{
int i,n=11 ,j, kk;
float temp=0.0f;

float a[50] = {};
scanf("%d", &kk);
for(i = 0; i<kk; i++)
{
    scanf("%f", &a[i]);
}

printf("\nSorting A Float Array \n");

printf("\n\nElement Before Sorting \n\n");

for(i= 0; i<=10; i++)
{
    printf("%.2f  ", a[i]);
}

printf("\n");

printf("\n\nElement After Sorting \n\n");

for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
        }
    }
}
for(i= 0; i< 11; i++) 
{
    printf("%.2f  ", a[i]);
}
printf("\n\n");
}

