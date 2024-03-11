#include <bits/stdc++.h>
using namespace std;

void bruteforce(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int smallest = i;
        for (int j = i; j < n; j++)
        {
            if (arr[smallest] > arr[j])
            {
                smallest = j;
            }
        }
        swap(arr[i], arr[smallest]);
    }

    cout << "Resultant by method 1: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void betterSolution(int arr[], int n)
{
    int zero = 0, one = 0, two = 0;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zero++;
        if (arr[i] == 1)
            one++;
        if (arr[i] == 2)
            two++;
    }

    for (int i = 0; i < zero; i++)
        arr[i] = 0;
    for (int i = zero; i < zero + one; i++)
        arr[i] = 1;
    for (int i = zero + one; i < zero + one + two; i++)
        arr[i] = 2;

    cout<<"Resultant by method 2: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void optimalSolution(int arr[], int n)
{
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
            mid++;
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    cout<<"Resultant by method 3: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    // bruteforce(arr, n);
    // betterSolution(arr, n);
    optimalSolution(arr, n);
}