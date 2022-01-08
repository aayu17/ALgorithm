#include <iostream>
using namespace std;
int linear_search(int arr[], int size, int data)
{
    for (int i = 0; i < size; ++i)
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
    int arr[] = {10, 1, 4, 34, 25, 111, 44, 454};
    int size = *(&arr + 1) - arr;
    int data;
    cout << "ENTER ELEMENT TO SEARCH : ";
    cin >> data;
    int found = linear_search(arr, size, data);

    found != -1 ? cout << "\nELEMENT FOUND AT INDEX " << found : cout << "ELEMENT NOT FOUND";

    return 0;
}




BEST CASE => O(1)
WORST CASE => O(n)
AVERAGECASE => O(n)
    
    
AYUSH GUPTA
