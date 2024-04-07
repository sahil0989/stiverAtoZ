#include <bits/stdc++.h>
using namespace std;

int getFirstOccrance(vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (arr[low] == x)
        return low;
    else
        return -1;
}

int getLastOccrance(vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (arr[low - 1] == x)
        return (low);
    else
        return -1;
}

int count(vector<int> &arr, int n, int k)
{
    int firstVal = getFirstOccrance(arr, n, k);
    int lastVal = getLastOccrance(arr, n, k);

    return lastVal - firstVal;
}

int main()
{
    vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
    int n = 8, x = 8;
    int ans = count(arr, n, x);
    cout << "The number of occurrences is: "
         << ans << "\n";
    return 0;
}