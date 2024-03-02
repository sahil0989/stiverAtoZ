#include <bits/stdc++.h>
using namespace std;

int func(vector<int>& arr, int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
            i++;

        while (arr[j] > pivot && j >= low)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);

    return j;
}

void quick_sort(vector<int>& arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = func(arr, low, high);
        quick_sort(arr, low, pIndex - 1);
        quick_sort(arr, pIndex + 1, high);
    }
}

int main()
{
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = 7;

    cout << "Before apply quick sort" << endl;
    cout << "Array : ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    quick_sort(arr, 0, n - 1);
    
    cout << "After apply quick sort" << endl;
    cout << "Result : ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}