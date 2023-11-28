#include <stdio.h>

//Bubble Sort



int main()
{
    int i,j,temp;
    int arr[]={8,6,2,13,12,9,4};

    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(i=n-1;i>=1;i--)
    {   
     for(j=0; j<=i-1; j++)
     {
        if(arr[j]>arr[j+1])
        {
            //swap
            temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1]=temp;

            
        }
     }   

    }
    
    printf("%d %d %d %d %d %d %d", arr[0], arr[1],arr[2],arr[3],arr[4],arr[5], arr[6], arr[7]);
    return 0;
}
