#include <stdio.h>

int BinarySearch(int arr[],int low,int high, int key)
{
    if(low<=high)
    {
        int mid = (low + high)/2; 

        if(key == arr[mid])
        {
            return mid;
        }
        else if(key > arr[mid])
        {
            return BinarySearch(arr,mid+1,high,key);
        }
        else
        {
            return BinarySearch(arr,low,mid-1,key);
        }
    
    }

    return -1;
}



int main()
{
        
    int arr[] = {1, 4, 7, 9, 16, 56, 70};

    int n=sizeof(arr)/sizeof(arr[0]);
    int x=BinarySearch(arr,0,6,4);

    printf("%d", x);


    return 0;
}
