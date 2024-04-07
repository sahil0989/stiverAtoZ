#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &arr)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = INT_MAX;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] < ans)
        {
            ans = arr[mid];
        }

        if (arr[mid] <= arr[high])
        {
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
        else
        {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findMin(arr);
    cout << "The minimum element is: " << ans << "\n";
    return 0;
}