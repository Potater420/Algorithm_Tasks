#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={2,4,6,7};
    int index=sizeof(arr)/sizeof(arr[0]);
    int counter=count(index);
    printf("sum is: %d",counter);

    return 0;
}
int count(int index)
{

    int counter;
    if(index==0)
    {
        return 0;
    }
    else
    {
        counter=1+count(index-1);
    }
}
