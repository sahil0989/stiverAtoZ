#include <bits/stdc++.h>
using namespace std;

int bruteforce(vector<int> arr, int n, int x)
{
    int ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
            return i;
    }

    return n;
}

int lowerBound(vector<int> arr, int n, int x)
{
    int left = 0, right = n - 1;
    int ans = 10;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 9;

    // int ind = bruteforce(arr, n, x);
    int ind = lowerBound(arr, n, x);
    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}