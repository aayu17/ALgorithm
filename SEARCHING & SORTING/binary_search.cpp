#include <iostream>
using namespace std;

// ITERATIVE METHOD
//  int binarySearch(int arr[], int n, int data)
//  {
//      int l = 0, r = n - 1;
//      while (l <= r)
//      {
//          int mid = (l + r) / 2;
//          if (data == arr[mid])
//          {
//              return mid;
//          }
//          else if (data < arr[mid])
//              r = mid - 1;
//          else
//              l = mid + 1;
//      }
//      return -1;
//  }

// RECURSIVE METHOD
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

int main()
{
    int arr[] = {5, 9, 17, 23, 25, 45, 59, 63, 71, 89};
    int num, size = *(&arr + 1) - arr;
    cout << "WHICH ELEMENT DO YOU WANT TO SEARCH :";
    cin >> num;
    // int loc = binarySearch(arr, size, num); // for iterarive

    int loc = binarySearch(arr, 0, size - 1, num); // for recursive

    loc >= 0 ? cout << num << " IS PRESENT AT INDEX "
                    << loc
             : cout << "\nELEMENT IS NO PRESENT IN ARRAY\n";
    return 0;
}

// WORST/AVERAGE CASE : O(LOG n)
// BEST CASE : O(1)
