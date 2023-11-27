#include <stdio.h>

// Objective: To sort the following array using Merge Sort


int merge(int arr[], int low, int mid, int high)
{
   int left = low;
   int right= mid+1;

   while(left<=mid && right<=high)
   {
        if(arr[left]<=arr[right])
        {
             
        }
   }




}




int mergeSort(int arr[], int low, int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;

        //sort first and second halves

        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1, high);

        merge(arr, low, mid, high);



    }


}





int main()
{
    int arr[]={12,11,13,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);






    return 0;
}