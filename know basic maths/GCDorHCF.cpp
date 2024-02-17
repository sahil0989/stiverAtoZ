#include <bits/stdc++.h>
using namespace std;

void bruteForce(int a, int b)
{
    int ans = 1;
    for (int i = 2; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0 && ans < i)
        {
            ans = i;
        }
    }
    cout << "HCF of " << a << " and " << b << " is " << ans << endl;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    gcd(b, a % b);
}

void optimalSolution(int a, int b)
{
    cout << "HCF of " << a << " and " << b << " is " << gcd(a, b) << endl;
}

int main()
{
    bruteForce(3, 9);
    optimalSolution(12, 16);
}