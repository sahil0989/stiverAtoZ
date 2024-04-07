#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &arr, int m)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= m)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}

int main()
{
    vector<int> arr = {1, 2, 4, 7};
    int x = 6;
    int ind = searchInsert(arr, x);
    cout << "The index is: " << ind << "\n";
    return 0;
}