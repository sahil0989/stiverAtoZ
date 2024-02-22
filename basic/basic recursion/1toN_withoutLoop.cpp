#include <bits/stdc++.h>
using namespace std;

void recursiveFunc(int i, int num)
{
    if (i > num)
        return;

    cout << i << " ";
    recursiveFunc(i + 1, num);
}

void bruteForce(int num)
{
    recursiveFunc(1, num);
}

int main()
{
    bruteForce(9); // O(N) S(N)
}