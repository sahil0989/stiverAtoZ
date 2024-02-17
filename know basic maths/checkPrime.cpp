#include <bits/stdc++.h>
using namespace std;

void bruteForce(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << num << " is not a prime number." << endl;
            return;
        }
    }
    cout << num << " is a prime number." << endl;
}

void optimalSolution(int num)
{
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << num << " is not a prime number." << endl;
            return;
        }
    }
    cout << num << " is a prime number." << endl;
}

int main()
{
    bruteForce(31);
    optimalSolution(33);
}