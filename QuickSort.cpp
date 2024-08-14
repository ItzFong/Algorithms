#include<iostream>
using namespace std;

int Partition(int a[], int low, int high){
    int pivot = a[high];
    int i = low - 1;
    for(int j = low; j < high; j++){
        if (a[j] < pivot)
        {
            /* code */
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[high]);
    return (i+1);
}

void QuickSort(int a[], int low, int high){
    if(low<high){
        int PartitionIndex = Partition(a,low,high);
        QuickSort(a, low, PartitionIndex-1);
        QuickSort(a, PartitionIndex+1, high);
    }
}