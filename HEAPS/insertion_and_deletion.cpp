#include <bits/stdc++.h>
using namespace std;
#define MAX 100
void insertKey(int arr[], int &n, int key)
{
    n = n + 1;
    arr[n - 1] = key;
    int i = n;
    // cout << arr[n - 1] << endl;
    while (i >= 1)
    {
        int parent = (i - 1) / 2;
        if (arr[i - 1] > arr[parent])
        {
            // cout << arr[i - 1] << " " << arr[parent] << endl;
            swap(arr[i - 1], arr[parent]);
            i = parent + 1;
        }
        else
            return;
    }
}
void deleteRoot(int arr[], int &n)
{
    arr[0] = arr[n - 1];
    n = n - 1;
    int i = 0;
    while (i <= n)
    {
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if (l > n || r > n)
            return;
        if (arr[l] > arr[r])
        {
            if (arr[l] > arr[i])
            {
                swap(arr[i], arr[l]);
                i = l;
            }
        }
        else if (arr[r] > arr[l])
        {
            if (arr[r] > arr[i])
            {
                swap(arr[i], arr[r]);
                i = r;
            }
        }
        else
            return;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[MAX] = {50, 40, 45, 30, 20, 35, 10};
    int n = 7;
    // cout << n << endl;
    // insertKey(arr, n, 60);
    // printArray(arr, n);
    deleteRoot(arr, n);
    printArray(arr, n);
    return 0;
}

// DELETION FOR N ELEMENTS IS O(N LOG N)
// INSERTION IS ALSO O(N LOG N)
