#include <bits/stdc++.h>
using namespace std;

void betterSolution(int arr[], int n)
{
    next_permutation(arr, arr + n);

    cout << "Next Permutation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void optimalSolution(int arr[], int n)
{
    int index = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        reverse(arr, arr + n);
        
        cout << "Next Permutation: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] > arr[index])
        {
            swap(arr[index], arr[i]);
            break;
        }
    }

    reverse(arr + index, arr + n);

    cout << "Next Permutation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 1, 5, 4, 3, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    betterSolution(arr, n);
    optimalSolution(arr, n);
}