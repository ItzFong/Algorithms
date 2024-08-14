#include<iostream>
using namespace std;

void BubbleSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j< n-i-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}

void Merge(int a[], int left, int right, int mid){
    int subA1 = mid - left;
    int subA2 = right - mid + 1;
    int *SubArr1 = new int [subA1];
    int *SubArr2 = new int [subA2];

    for(int i = 0; i < subA1; i++){
        SubArr1[i] = a[left+i];
    }
    for(int i = 0; i < subA2; i++){
        SubArr1[i] = a[mid+i];
    }
    int indexA1 = 0, indexA2 = 0;
    int indexMerge = left; 

    while (indexA1 < subA1 && indexA2 < subA2)
    {
        if(SubArr1[indexA1] < SubArr2[indexA2]){
            a[indexMerge] = SubArr1[indexA1];
            indexA1++;
        }
        else{
            a[indexMerge] = SubArr2[indexA2];
            indexA2++;
        }
        indexMerge++;
    }

    while (indexA1 < subA1)
    {
        a[indexMerge] = a[indexA1];
        indexA1++;
        indexMerge++;
    }
    while (indexA2 < subA2)
    {
        a[indexMerge] = a[indexA2];
        indexA2++;
        indexMerge++;
    }
}

void MergeSort(int a[], int left, int right){
    if(left>right){
        return;
    }
    int mid = left + (right - left)/2;
    MergeSort(a,left, mid);
    MergeSort(a,mid+1, right);
    Merge(a,left,right,mid);
}

int Partition(int a[], int low, int high){
    int pivot = a[high];
    int j = low - 1;
    for(int i = low; i < high; i++){

        if (a[i] < pivot)
        {
            j++;
            swap(a[j], a[i]);
        }
    }
    swap(a[j+1], a[high]);
    return (j+1);
}

void QuickSort(int a[], int low, int high){
    if(low < high){
        int P_i = Partition(a,low,high);
        QuickSort(a, low, P_i-1);
        QuickSort(a, P_i+1, high);
    }
}

void InsertionSort(int arr[], int n){
    int i,j,key;
    for(i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void BubbleSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int i = 0; i< n - i - 1; i++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}

void SelectionSort(int a[], int n){
    int smallest_element, i ,j;
    for(i = 0; i < n - 1; i++)
    {
        smallest_element = i;
        for(j = 1; j < n; j++){
            if (a[smallest_element] > a[j])
            {
                /* code */
                smallest_element = j;
            }
        }
        if(smallest_element!=i){
            swap(a[smallest_element], a[i]);
        }
    }
}