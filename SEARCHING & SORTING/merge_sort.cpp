#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    int b[r + 1];
    int k = l;
    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= r)
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = arr[i];
            i++;
            k++;
        }
    }
    for (int z = l; z <= r; z++)
    {
        arr[z] = b[z];
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
void printArray(int arr[], int size)
{
    cout << "\nElements in array are : ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[] = {7, 4, 10, 8, 3, 1};
    int size = *(&arr + 1) - arr;
    mergeSort(arr, 0, size - 1);
    printArray(arr, size);

    return 0;
}

// TIME COMPLEXITY IS O(n log n) IN EVERY CASE

// THIS NOT inplace BUT IT IS stable