#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={2,4,6};
    int index=sizeof(arr)/sizeof(arr[0])-1;
    int sum=arr_sum(arr,index);
    printf("sum is: %d",sum);

    return 0;
}
int arr_sum(int arr[],int size)
{

    int sum;
    if(size<0)
    {
        return sum;
    }
    else
    {
        sum = arr[size] + arr_sum(arr,size-1);
    }
}
