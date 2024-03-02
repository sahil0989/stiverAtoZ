#include <bits/stdc++.h>
using namespace std;

void mergeArray(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void merge_sort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    mergeArray(arr, low, mid, high);
}

int main()
{
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = 7;

    cout << "Before apply merge sort" << endl;
    cout << "Array : ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    merge_sort(arr, 0, n - 1); // O(N) S(N)

    cout << "After apply merge sort" << endl;
    cout << "Result : ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}