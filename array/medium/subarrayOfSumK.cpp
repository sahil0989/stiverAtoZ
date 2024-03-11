#include <bits/stdc++.h>
using namespace std;

int bruteforce(vector<int> arr, int k)
{

    int n = arr.size();
    int maxSubArray = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if (sum == k)
            {
                maxSubArray++;
            }
        }
    }

    return maxSubArray;
}

int bettersolution(vector<int> arr, int k)
{
    int left = 0, right = 0;
    int sum = arr[0], subArray = 0;

    while (right < arr.size())
    {

        while (sum > k && left <= right)
        {
            sum -= arr[left];
            left++;
        }

        if (sum == k)
            subArray++;

        right++;

        if (right < arr.size())
            sum += arr[right];
    }

    return subArray;
}

int optimalsolution(vector<int> arr, int k)
{

    map<int, int> mpp;
    mpp[0] = 1;
    int presum = 0, cnt = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        presum += arr[i];

        int remove = presum - k;

        cnt += mpp[remove];

        mpp[presum] += 1;
    }

    return cnt;
}


int main()
{
    vector<int> arr = {3, 1, 2, 4};
    int k = 6;

    // int ans = bruteforce(arr, k);
    // int ans = bettersolution(arr, k);
    int ans = optimalsolution   (arr, k);

    cout << "No. of Subarray with sum " << k << " is " << ans << endl;
}