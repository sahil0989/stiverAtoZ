#include <bits/stdc++.h>
using namespace std;

int bruteforce(vector<int> a, int b)
{
    int count = 0;
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        int xor1 = 0;
        for (int j = i; j < n; j++)
        {
            xor1 ^= a[j];

            if (xor1 == b)
                count++;
        }
    }

    return count;
}

int subarraysWithSumK(vector<int> a, int b)
{
    map<int, int> mpp;
    int cnt = 0;
    int xorr = 0;

    mpp[xorr]++;

    for (int i = 0; i < a.size(); i++)
    {
        xorr ^= a[i];

        int x = xorr ^ b;

        cnt += mpp[x];

        mpp[xorr]++;
    }
    return cnt;
}

int main()
{
    vector<int> a = {4, 2, 2, 6, 4};
    int b = 6;

    int ans;

    cout << ans << endl;
}