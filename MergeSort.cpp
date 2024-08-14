#include<iostream>
using namespace std;

void Merge(int arr[], const int left, const int mid, const int right){
    const int SubA1 = mid - left;
    const int SubA2 = right - mid + 1;

    int *SubArr1 = new int [SubA1];
    int *SubArr2 = new int [SubA2];

    for(int i = 0 ; i < SubA1 ; i++)
    {
        SubArr1[i] = arr[left+i];
    }
    for(int i = 0 ; i < SubA2 ; i++)
    {
        SubArr2[i] = arr[mid+i];
    } 
    
    int IndxA1 = 0, IndxA2 = 0;
    int indexMerg = left;
    while (IndxA1 < SubA1 && IndxA2 < SubA2)
    {
        if (SubArr1[IndxA1] > SubArr2[IndxA2])
        {
            /* code */
            arr[indexMerg] = SubArr1[IndxA1];
            IndxA1++;
        }
        else
        {
            arr[indexMerg] = SubArr2[IndxA2];
            IndxA2++;
        }
        indexMerg++; 
    }
    while (IndxA1 < SubA1)
    {
        arr[indexMerg] = SubArr1[IndxA1];
        IndxA1++;
        indexMerg++; 
    }
    while (IndxA2 < SubA2)
    {
        arr[indexMerg] = SubArr2[IndxA2];
        IndxA2++;
        indexMerg++; 
    }
}

void MergeSort(int a[], const int left, const int right){
    if(left>right){
        return;
    }
    int mid = left+ (right - left)/2;
    MergeSort(a, left, mid);
    MergeSort(a, mid+1, right);
    Merge(a,left,mid,right);


}