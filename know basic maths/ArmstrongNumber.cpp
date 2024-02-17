#include <bits/stdc++.h>
using namespace std;

void bruteForce(int n)
{
    string ansStr = to_string(n);
    int numSum = 0;
    int temp = n;

    while (temp > 0)
    {
        int rem = temp % 10;
        numSum += pow(rem, ansStr.length());
        temp /= 10;
    }

    if (n == numSum)
    {
        cout << n << " is a pallidrome." << endl;
    }
    else
    {
        cout << n << " is not a pallidrome" << endl;
    }
}

int main()
{
    bruteForce(153);
}