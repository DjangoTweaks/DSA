#include <stdio.h>

    // Defining Variables: 

    //number of items available
    int n = 5;

    //profits of the respective items
    int p[]={3,3,2,5,1};

    //weights of the respective items
    int w[]={10,15,10,12,8};

    //represents the max weight possible that can fit in the knapsack
    int maxWeight=10;

    //array to show whether the particular item in the index of the array has been used or not. 
    int used[10];

    //Current Weight
    int currentWeight; 

    // Current Index of the maxiumum profit to weight ratio 
    int currentIndexMaxPW;

int main()
{
   

    //initialize a for loop to cycle thru the list of items
    for(int i; i<=n-1; i++)
    {
        // set all elements in the used array to 0 
        used[i]=0;

        // current weight that the knapsack can hold
        currentWeight = maxWeight;     
    }

    // Runs Until the knapsack is full
    while(currentWeight>0)
    {
        // distinguishes the starting index from a placeholder
        // if we hade set it to be 0, it would have implied that the 
        // current index 0 for p[0] and w[0] would be the most profitable 
        // and that is what we do not want, therefore -1 serves as a great placeholder 
        currentIndexMaxPW =-1;

        for(int i=0;i<n;++i)
        {
            
        }


    }






    return 0;
}