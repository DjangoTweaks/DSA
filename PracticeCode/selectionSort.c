#include <stdio.h>

// Selection Sort

int main()
{
    int min;
    int arr[]={8,6,2,13,12,9,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<=n-2;i++)
    {
        min=i;

        for(int j=i; j<=n-1; j++)
        {
            if(arr[j]<arr[min])
            {
            min = j;
            }    

        }

        if(min!=i)
        {   
            //swap arr[min] and arr[i] 

            int temp;
            temp = arr[min];
            arr[min]=arr[i];
            arr[i]=temp;


        }

    }    

     printf("Your Sorted Array is: %d %d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6]);

    
    
    
    
    
    return 0;
}
