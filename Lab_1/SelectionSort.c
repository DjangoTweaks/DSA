// Selection Sort In C

#include <stdio.h>

int main()
{

    int arr[] = {384,4292393,54984,323,49385,33,34,382};
    int i, n, min, j, temp;

    // used to calculate the total length of the array by taking the size of the whole
    // array and dividing it by the size of one number in the array, giving us the number
    //  of elements in the array.
    n = sizeof(arr) / sizeof(arr[0]);

    // we loop till n-2 here because the last number will always be sorted by default
    
    for (i = 0; i <= n - 2; i++)
    {
        // assuming that minimum will be i
        min = i;

        // here we loop from whatever index i is at to the absolute end of the array which is (n-1)
        //  this loop is for checking the minimum number out of the entire rest of the array
        for (j = i; j <= n - 1; j++)
        {
            // conditioning that array value at index j will be less than the value at minimum, which was i originally.
            // if this condition occurs to be true, min will become the index value taken at j.
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

       
        //swapping arr[i] and arr[min] {arr[min] is just array value at index j because min=j} 
        // as long as minimum value is not equal to i.

        //swap(arr[i],arr[min])
        
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    printf("Your Sorted Array is: %d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);

    return 0;
}