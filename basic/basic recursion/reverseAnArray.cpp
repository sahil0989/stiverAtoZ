#include <bits/stdc++.h>
using namespace std;

void bruteForce(int arr[], int n)
{
    int ansArr[n];
    for (int i = 0; i < n; i++)
    {
        ansArr[i] = arr[n - i - 1];
    }

    cout << "Reverse Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << ansArr[i] << " ";
    }
    cout << endl;
}

void swapingMethod(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        // int temp = arr[i];
        // arr[i] = arr[n - i - 1];
        // arr[n - i - 1] = temp;

        swap(arr[i], arr[n - i - 1]);
    }

    cout << "Reverse Array Method 2 : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void recursiveMethod(int arr[], int i, int n)
{
    if (i < n)
    {
        swap(arr[i], arr[n]);
        recursiveMethod(arr, i + 1, n - 1);
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    bruteForce(arr, n); // O(N) S(N)
    // 1 2 3 4 5

    swapingMethod(arr, n);  // O(N) S(1)
    // 1 2 3 4 5

    // Recursive Method
    recursiveMethod(arr, 0, n - 1);  // O(N) S(1)
    // 5 4 3 2 1

    // Print for Recursion
    cout << "Reverse Array Recursion Method : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}