 #include <stdio.h>


//Objective: Sort an array using insertion sort. 

    int arr[]={9,3,8,1,63,49};

    int n = sizeof(arr)/sizeof(arr[0]);

    int i,j,temp;


 int main()
 {

    //setting the for loop from 0 to n-1 as the loop needs to hit all numbers inside the array for insertion sort
    //to work properly 
    
    for(i=0;i<=n-1;i++)
    {
        //set j=i as we need to initialize another loop for the swapping condition 
        j=i;

        // while loop is used instead of for loop because we need to run a set of statements until our conditions are 
        // broken or Falsified

        // j>0 because we want to make sure our loop doesn't decrement past the 0th index as the 0th index
        // won't have anything to compare to on itself. Its not like it needs to be compared to the left either. 
        while(arr[j-1]>arr[j] && j>0)
        {
            //swap
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;

            //decrement to make sure our loop is progressing to the left for comparison until the condition is broken 
            // out of 
            j--;

        }
    }

    printf("Your Desired Array Using Insertion Sort Is: %d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);


    return 0;
 }