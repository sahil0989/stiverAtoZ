#include <bits/stdc++.h>
using namespace std;

void bruteForce(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    cout<<"Sum of First N using Loop : "<<sum<<endl;
}

int recursive(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return num + recursive(num - 1);
}

void recursiveMethod(int num)
{
    int sum = recursive(num);
    cout << "Sum of First N using recursion : " << sum << endl;
}

void usingFormula(int num)
{
    int sum = (num * (num + 1)) / 2;

    cout << "Sum of First N using formula : " << sum << endl;
}

int main()
{
    bruteForce(5); // O(N) S(1)
    recursiveMethod(5); // O(N) S(1)
    usingFormula(5);    // O(1) S(1)
}