#include <bits/stdc++.h>
using namespace std;

void insertion(vector<int> &arr, int n, int i)
{
    if (i == n)
        return;

    int j = i;

    while (j > 0 && arr[j] < arr[j - 1])
    {
        swap(arr[j - 1], arr[j]);
        j--;
    }

    insertion(arr, n, i + 1);
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

    insertion(arr, n, 1); // O(N*N) S(N)

    cout << "After apply quick sort" << endl;
    cout << "Result : ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}