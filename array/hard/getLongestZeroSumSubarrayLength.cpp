#include <bits/stdc++.h>
using namespace std;

int bruteforce(vector<int> &arr)
{
    int maxLength = 0;

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if (sum == 0)
            {
                maxLength = max(maxLength, j - i + 1);
            }
        }
    }

    return maxLength;
}

int getLongestZeroSumSubarrayLength(vector<int> &arr)
{
    map<int, int> sumhashing;

    int n = arr.size();
    int sum = 0;
    int maxLength = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum == 0)
        {
            maxLength = i + 1;
        }
        else if (sumhashing.find(sum) != sumhashing.end())
        {
            maxLength = max(maxLength, i - sumhashing[sum]);
        }
        else
        {
            sumhashing[sum] = i;
        }
    }

    return maxLength;
}

int main()
{
    vector<int> arr = {6, -2, 2, -8, 1, 7, 4, -10};

    // int ans = bruteforce(arr);
    int ans = getLongestZeroSumSubarrayLength(arr);

    cout << "Length of longest Sub-array with sum 0 is: " << ans << endl;
}