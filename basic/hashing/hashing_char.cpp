#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string : ";
    cin >> s;

    // pre computation
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cout << "Enter number of test case : ";
    cin >> q;

    while (q--)
    {
        char ch;
        cout << "Enter the char : ";
        cin >> ch;

        // fetching
        cout << "Result : \'" << ch << "\' occur " << hash[ch - 'a'] << " times.\n"
             << endl;
    }
}