#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &arr)
{
    int n = arr.size();
    int low = 1, high = n - 2;

    if (n == 1 || arr[0] > arr[low])
        return 0;
    if (arr[n - 1] > arr[high])
        return n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if ((arr[mid] > arr[mid - 1]) && (arr[mid] > arr[mid + 1]))
            return mid;

        if(arr[mid] > arr[mid+1]){
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int ans = findPeakElement(arr);
    cout << "The peak is at index: " << ans << "\n";
    return 0;
}