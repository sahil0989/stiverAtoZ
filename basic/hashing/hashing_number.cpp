#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of an array : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precomputation
    int hash[100000] = {0}; // max value 10 ^ 6 in local
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    int q;
    cout << "Enter number of test case : ";
    cin >> q;

    while (q--)
    {
        int ch;
        cout << "Enter a number : ";
        cin >> ch;

        // fetching result
        cout << "Result : " << ch << " ouccur " << hash[ch] << " times." << endl;
    }
}