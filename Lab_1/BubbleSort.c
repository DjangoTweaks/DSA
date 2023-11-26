#include <stdio.h>

//Objective: Use Bubble Sort to sort an array of numbers



int main()
{
    
    int arr[]={9,3,8,1,63,49};

    //finding the length of the array
    int n=sizeof(arr)/sizeof(arr[0]);

    //intializing variables
    int i,j,temp;

    // first for loop explains how since we are pushing every number to the max (right) part of the array
    // we would eventually hit a point where the loop will have sorted numbers on the right side
    // vs unsorted numbers on the left side of the array
    

    // therefore this loop can go from n-1 which is the last element in the array to 
    // 1 since the first element of the array will always end up being sorted by default
    for(i=n-1;i>=1;i--)
    {

        // we want to iterate throughout the whole array till i-1
        // as if we had done i, the last number would have compared to the 
        // number to its right ie. arr[j+1]. As there would have been no
        // other number there, this would have caused a runtime error. 
        // therefore we do i-1 so that the second last number can compare with the last number
        // and get sorted. 
        for(j=0;j<=i-1;j++)
        {
            // if element at index j is greater than element at index j+1 (ie. to the right)
            // array will swap the values at each index. 

            //this causes the last number to be the greatest thru constant adjacent comparison

            if(arr[j]>arr[j+1])
            {
                //swap

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }

        }

    }

    printf("Your Sorted Array Using Bubble Sort is: %d %d %d %d %d %d", arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]);

    return 0;
}