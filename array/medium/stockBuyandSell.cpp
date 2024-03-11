#include <bits/stdc++.h>
using namespace std;

void bruteforce(int arr[], int n)
{
    int maxPro = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                maxPro = max(arr[j] - arr[i], maxPro);
            }
        }
    }

    cout << "Maximum profit is " << maxPro << endl;
}

void optimalSolution(int arr[], int n)
{

    int mini = INT_MAX, profit = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
            profit = 0;
        }
        else
        {
            profit = max(profit, arr[i] - mini);
        }
    }

    cout << "Maximum profit is " << profit << endl;
}

int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    bruteforce(arr, n);
    optimalSolution(arr, n);
}