#include <bits/stdc++.h>
using namespace std;

void recursiveFunc(int first, int second, int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << first << " ";

    recursiveFunc(second, first + second, i + 1, n);
}

int main()
{

    int a = 0, b = 1;

    int n = 10; // Number of terms

    recursiveFunc(a, b, 1, n); // O(N) S(1)
}