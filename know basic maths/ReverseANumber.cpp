#include <iostream>
using namespace std;

void method1(int n)
{
    int ans = 0;

    while (n > 0)
    {
        int temp = n % 10;
        ans = (ans * 10) + temp;
        n /= 10;
    }
    cout << "Method 1 : " << ans << endl;
}

int main()
{
    method1(5432);
}