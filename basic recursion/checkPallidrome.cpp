#include <bits/stdc++.h>
using namespace std;

void recursiveFunc(string str, int i, int n)
{
    if (i > n / 2)
    {
        cout << str << " is a pallidrome string." << endl;
        return;
    }
    if (str[i] != str[n])
    {
        cout << str << " is not a pallidrome string." << endl;
        return;
    }

    recursiveFunc(str, i + 1, n - 1);
}

int main()
{
    string str = "pallidrome";
    int i = 0;
    int n = str.length() - 1;

    recursiveFunc(str, i, n); // O(N) S(1)
}