#include <bits/stdc++.h>
using namespace std;

void bruteforce(int arr[], int n)
{
    int maxSum = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    cout << "Max sum of subarray by brute: " << maxSum << endl;
}

void optimalSolution(int arr[], int n)
{

    int sum = 0;
    int maxSum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum < 0)
            sum = 0;
        else
        {
            maxSum = max(maxSum, sum);
        }
    }
    cout << "Max sum of subarray by optimal: " << maxSum << endl;
}

int main()
{
    int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    bruteforce(arr, n);
    optimalSolution(arr, n);
}