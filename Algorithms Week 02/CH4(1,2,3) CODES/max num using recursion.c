#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {5,6,7,3,9,5,4};
    int index = sizeof(arr)/sizeof(arr[0])-1;

    int maximum = arr[index];
    int max = max_fn(arr,index,maximum);

    printf("max is: %d",max);

    return 0;
}
int max_fn(int arr[],int index,int maximum)
{

    if(index<0)
    {
        return maximum;
    }
    else
    {
        if (maximum<arr[index-1])
        {
            maximum = arr[index-1];
        }
        max_fn(arr,index-1,maximum);

    }
}

