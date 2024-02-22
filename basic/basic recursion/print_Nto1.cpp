#include <bits/stdc++.h>
using namespace std;

void recursiveFunc(int num)
{
    if (num == 0)
        return;
    cout << num << " ";
    recursiveFunc(num-1);
}

void bruteForce(int num)
{
    recursiveFunc(num);
}

int main()
{
    bruteForce(9); // O(N) S(N)
}