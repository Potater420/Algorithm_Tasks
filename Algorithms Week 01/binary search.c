#include <stdio.h>
#include <stdlib.h>
int binary_search(int list[],int item,int length)
{

    int low=0, high = length-1;
    int mid,guess;

    while(low<=high)  //while you haven't narrowed it down to one element
    {
        mid=(high+low)/2;
        guess=list[mid];

        if(list[guess]==item)
        {
            return mid;
        }
        else if(list[guess]>item)
        {
            high=mid-1;
        }
        else if(list[guess]<item)
        {
            low=mid+1;
        }
        else
        {
            return -1;
        }

    }
}



int main()
{
    int item;
    int list[]={1,3,5,7,9,10,13,16};
    int length=sizeof(list)/sizeof(list[0]);

    printf("Enter which number you'd like to know index of: ");
    scanf("%d",&item);

    int guess=binary_search(list,item,length);
    if(guess==-1)
    {
        printf("number doesnt exist in list \n");
    }
    else
    {
        printf("index is: %d",guess);
    }

    return 0;
}
