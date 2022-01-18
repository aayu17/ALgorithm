#include <iostream>
using namespace std;
int interpolationSearch(int arr[], int size, int data)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {

        int pos = (low) + ((data - arr[low]) / (arr[high] - arr[low])) * (high - low);
        if (arr[pos] == data)
            return pos;
        else if (arr[pos] > data)
            high = pos - 1;
        else
            low = pos + 1;
    }

    return -1;
}

int main()
{
    int arr[] = {5, 9, 17, 23, 25, 45, 59, 63, 71, 89};
    int size = *(&arr + 1) - arr;
    int data;
    cout << "ENTER ELEMENT TO SEARCH : ";
    cin >> data;
    int found = interpolationSearch(arr, size, data);

    found >= 0 ? cout << "\nELEMENT FOUND AT INDEX " << found : cout << "ELEMENT NOT FOUND";

    return 0;
}
