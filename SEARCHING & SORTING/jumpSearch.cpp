#include <bits/stdc++.h>
using namespace std;
int jumpSearch(int arr[], int n, int data)
{
    int jump = sqrt(n);
    int l = 0;
    for (int i = 0; i < n; i += jump)
    {
        if (data == arr[i])
            return i;

        else if (arr[i] < data)
        {
            l = i;
        }
        else
            break;
    }
    for (int i = l; i < n; ++i)
    {
        if (arr[i] == data)
        {
            return i;
            break;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {5, 9, 17, 23, 25, 45, 59, 63, 71, 89};
    int num, size = *(&arr + 1) - arr;
    cout << "WHICH ELEMENT DO YOU WANT TO SEARCH :";
    cin >> num;
    int loc = jumpSearch(arr, size, num);
    loc >= 0 ? cout << num << " IS PRESENT AT INDEX "
                    << loc
             : cout << "\nELEMENT IS NO PRESENT IN ARRAY\n";
    return 0;
    return 0;
}