#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of an array"
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element at " << i << " index : ";
        cin >> arr[i];
    }

    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    cout << "\nFrequency of all elements " << endl;

    for (auto it : mpp)
    {
        cout << "frequency of " << it.first << " = " << it.second << endl;
    }
}