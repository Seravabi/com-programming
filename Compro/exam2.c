#include<stdio.h>

int main()
{
    int arr_size;
    scanf("%f", &arr_size);
    float number[arr_size];
    int i, tmp;
    for(i=0; i<arr_size; i++)
    {
        scanf("%f", &number[i]);
    }
    i = 0;
    do
    {
        if(i < arr_size-1 && number[i] < number[i+1])
        {
            tmp = number[i+1];
            number[i+1] = number[i];
            number[i] = tmp;
            i = 0;
        }
        else
        {
            i++;
        }
    }while(i < arr_size);
    for(i=0; i<arr_size; i++)
    {
        printf("%.2f\n", number[i]);
    }
    return 0;
}