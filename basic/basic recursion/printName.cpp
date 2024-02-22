#include <bits/stdc++.h>
using namespace std;

void recursive(int i, int n, string str)
{
    if (i > n)
        return;
    cout << str << " ";
    recursive(i + 1, n, str);
}

void bruteForce(string str, int n)
{
    recursive(1, n, str);
}

int main()
{
    bruteForce("DSA", 9);
}