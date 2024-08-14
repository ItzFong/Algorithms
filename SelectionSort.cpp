#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    int i, j, smallest_indx;
    for (i = 0; i < n-1; i++)
    {
        smallest_indx = i;
        for(int j = 1; j < n; j++){
            if(arr[smallest_indx] > arr[j]){
                smallest_indx = j;
            }
        }
        if (smallest_indx!=i)
        {
            /* code */
            swap(arr[smallest_indx], arr[i]);
        }
        
    }
    
}