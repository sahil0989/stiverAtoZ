#include <bits/stdc++.h>
using namespace std;

void bruteforce(int arr[], int n, int target)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Two Sum exist " << arr[i] << " and " << arr[j] << endl;
                return;
            }
        }
    }
    cout << "Two sum don't exist." << endl;
}

void betterSolution(int arr[], int n, int target)
{

    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (int i = 0; i < n - 1; i++)
    {
        int remValue = target - arr[i];

        if (mpp.find(remValue) != mpp.end())
        {
            cout << "Two Sum exist " << arr[i] << " and " << remValue << endl;
            return;
        }
    }

    cout << "Two sum don't exist." << endl;
}

void optimalSolution(int arr[], int n, int target)
{
    int left = 0, right = n - 1;
    sort(arr, arr + n);

    while (left < right)
    {
        if (arr[left] + arr[right] == target)
        {
            cout << "Two sum exist " << arr[left] << " and " << arr[right] << endl;
            return;
        }
        if (arr[left] + arr[right] < target)
            left++;
        else
            right--;
    }

    cout << "Two sum don't exist." << endl;
}

int main()
{
    int arr[] = {2, 6, 5, 8, 11};
    int target = 11;
    int n = sizeof(arr) / sizeof(arr[0]);

    bruteforce(arr, n, target);
    betterSolution(arr, n, target);
    optimalSolution(arr, n, target);
}