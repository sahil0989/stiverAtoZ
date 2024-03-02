#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (arr[j] < arr[j - 1] && j > 0)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            j--;
        }
    }

    cout << "After applying insertion sort " << endl;
    cout << "Result : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of an array " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertion_sort(arr, n); // O(N*N) S(1)
}