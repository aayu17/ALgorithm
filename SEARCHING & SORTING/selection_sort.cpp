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

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(arr[i], arr[min]);
        }
    }
}
int main()
{

    int arr[] = {7, 4, 10, 8, 3, 1};
    int size = *(&arr + 1) - arr;
    insertionSort(arr, size);
    printArray(arr, size);

    return 0;
}

// TIME COMPLEXITY IS O(n^2) IN EVERY CASE

// THIS NOT stablE BUT IT IS INPLACE
