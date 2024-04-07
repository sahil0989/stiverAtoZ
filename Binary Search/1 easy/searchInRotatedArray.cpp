#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int n, int k)
{
    int low = 0, high = n - 1;
    int ans = -1;

    if (n == 1)
        return 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == k)
            return mid;

        if (arr[mid] < arr[high])
        {
            if (arr[mid] <= k && arr[high] >= k)
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        else
        {
            if (k <= arr[mid] && arr[low] <= k)
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {5, 6, 7, 8, 9, 10, 0, 2, 3};
    int n = 9, k = 7;
    int ans = search(arr, n, k);
    if (ans == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << ans << "\n";
    return 0;
}