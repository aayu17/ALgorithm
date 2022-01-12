#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "\nElements in array are : ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int start = low;
    int end = high;
    while (start < end)
    {
        while (arr[start] <= pivot)
            ++start;
        while (arr[end] > pivot)
            --end;
        if (start < end)
            swap(arr[start], arr[end]);
    }
    swap(arr[low], arr[end]);
    printArray(arr, (high + 1));
    return end;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int loc = partition(arr, low, high);
        partition(arr, low, loc - 1);
        partition(arr, loc + 1, high);
    }
}
int main()
{

    int arr[] = {7, 6, 10, 5, 9, 2, 1, 15};
    int size = *(&arr + 1) - arr;
    quickSort(arr, 0, size - 1);
    printArray(arr, size);

    return 0;
}



// Worst Case : O(n^2)
// Best/Avg Case : O(nlog n)
// Ayush Gupta
