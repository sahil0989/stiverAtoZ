#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {1, 3, 1, 1, 3, 4, 5};

    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int largest = INT_MIN;
    int largFreq = 0;
    int smallest = INT_MAX;
    int smallFreq = 0;

    for (auto it : mpp)
    {
        if (it.second > largest)
        {
            largest = it.second;
            largFreq = it.first;
        }
        if (it.second < smallest)
        {
            smallest = it.second;
            smallFreq = it.first;
        }
    }

    cout << "Max freq : " << largest << " of " << largFreq << endl;
    cout << "Min freq : " << smallest << " of " << smallFreq << endl;
}