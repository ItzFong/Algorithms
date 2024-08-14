#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    int i,j,key;
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j];
            j = j -1;
        }
        arr[j+1] = key;
        
    }
}