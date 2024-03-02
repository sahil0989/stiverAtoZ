#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int i)
{
    if (i == 0)
        return;

    for (int j = 0; j < i; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
    }

    bubbleSort(arr, i - 1);
}

int main()
{
    vector<int> arr = {9, 5, 3, 2, 6, 1, 7};
    int n = arr.size();

    cout << "Array : ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    bubbleSort(arr, n - 1); //O(N*N) S(N)

    cout << "After apply recursive bubble sort...." << endl;

    cout << "Result : ";

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}