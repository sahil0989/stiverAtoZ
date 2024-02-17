#include <iostream>
using namespace std;

void method1(int n)
{
    int reverseNum = 0;
    int temp = n;
    while (temp > 0)
    {
        int rem = temp % 10;
        reverseNum = (reverseNum * 10) + rem;
        temp /= 10;
    }
    if (reverseNum == n)
    {
        cout << n << " is pallidrome" << endl;
    }
    else
    {
        cout << n << " is not pallidrome" << endl;
    }
}

int main()
{
    method1(12321);
}