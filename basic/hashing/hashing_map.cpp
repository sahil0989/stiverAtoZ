#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of an array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre computation
    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int testCase;
    cout << "Enter the number of test cases : ";
    cin >> testCase;

    while (testCase--)
    {
        int num;
        cout << "Enter a number : ";
        cin >> num;

        // fetching
        cout << "Result : " << num << " occur " << mpp[num] << " times.\n"
             << endl;
    }
}