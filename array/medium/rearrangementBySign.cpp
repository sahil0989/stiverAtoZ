#include <bits/stdc++.h>
using namespace std;

void bruteforce(int arr[], int k)
{
    int ans[k];

    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            neg.push_back(arr[i]);
        }
        else
            pos.push_back(arr[i]);
    }

    int m = 0, n = 0;
    for (int i = 0; i < k; i++)
    {
        if (i % 2 == 0)
        {
            ans[i] = pos[m];
            m++;
        }
        else
        {
            ans[i] = neg[n];
            n++;
        }
    }

    cout << "Method 1: ";
    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

void optimalSolution(int arr[], int n)
{
    int pos = 0, neg = 0;
    int ans[n];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            ans[2 * pos] = arr[i];
            pos++;
        }
        else
        {
            ans[2 * neg + 1] = arr[i];
            neg++;
        }
    }

    cout << "Method 2: ";
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, -4, -5};
    int n = sizeof(arr) / sizeof(arr[0]);

    bruteforce(arr, n);
    optimalSolution(arr, n);
}