#include <bits/stdc++.h>
using namespace std;

void bruteforce(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }

        if (count > n / 2)
        {
            cout << "Element more than n/2 is " << arr[i] << endl;
            return;
        }
    }

    cout << "No element is present more than n/2." << endl;
}

void betterSolution(int arr[], int n)
{
    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second > n / 2)
        {
            cout << "Element more than n/2 is " << it.first << endl;
            return;
        }
    }
    cout << "No element is present more than n/2." << endl;
}

void optimalSolution(int arr[], int n)
{
    int reqEle = arr[0];
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (count == 0)
        {
            reqEle = arr[i];
            count = 1;
        }
        else if (arr[i] == reqEle)
            count++;
        else
            count--;
    }

    cout << "Element more than n/2 is " << reqEle << endl;
}

int main()
{
    int arr[] = {2, 2, 1, 1, 1, 2, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    bruteforce(arr, n);
    betterSolution(arr, n);
    optimalSolution(arr, n);
}