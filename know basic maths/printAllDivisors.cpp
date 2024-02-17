#include <bits/stdc++.h>
using namespace std;

void bruteForce(int num)
{
    cout << num << " = ";
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void optimalSolution(int num)
{
    cout << num << " = ";
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
            if (num / i != i)
            {
                cout << num / i << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    bruteForce(36);
    optimalSolution(36);
}