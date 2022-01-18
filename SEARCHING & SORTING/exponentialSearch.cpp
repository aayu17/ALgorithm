#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int data)
{
    if (l <= r)
    {
        int mid = (l + r) / 2;
        if (data == arr[mid])
        {
            return mid;
        }
        else if (data < arr[mid])
            return binarySearch(arr, l, mid - 1, data);
        else
            return binarySearch(arr, mid + 1, r, data);
    }
    return -1;
}
int exponentialSearch(int arr[], int size, int data)
{
    if (arr[0] == data)
        return 0;
    int i = 1;
    while (i < size && arr[i] <= data)
        i *= 2;

    return binarySearch(arr, i / 2, min(i, size - 1), data);
}

int main()
{
    int arr[] = {5, 9, 17, 23, 25, 45, 59, 63, 71, 89};
    int size = *(&arr + 1) - arr;
    int data;
    cout << "ENTER ELEMENT TO SEARCH : ";
    cin >> data;
    int found = exponentialSearch(arr, size, data);

    found >= 0 ? cout << "\nELEMENT FOUND AT INDEX " << found : cout << "ELEMENT NOT FOUND";

    return 0;
}
