#include <bits/stdc++.h>
using namespace std;

void iterativeMethod(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    cout << "Factorial using iterative method : " << factorial << endl;
}

int recursiveMethod(int num)
{
    if (num <= 1)
    {
        return 1;
    }

    return num * recursiveMethod(num - 1);
}

void recursionMethod(int n)
{
    int ans = recursiveMethod(n);
    cout << "Factorial using recursive method : " << ans;
}

int main()
{
    iterativeMethod(10); // O(N) S(1)
    recursionMethod(10); // O(N) S(N)
}