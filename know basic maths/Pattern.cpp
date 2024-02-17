#include <iostream>
using namespace std;

void pattern1(int n)
{
    int k = 1;
    for (int i = n; i > 0; i--)
    {
        for (int j = n; j >= i; j--)
        {
            cout << j << " ";
        }
        for (int s = 1; s < 2 * (n - k); s++)
        {
            cout << i << " ";
        }
        for (int j = i; j <= n; j++)
        {
            if (j == 1)
            {
                continue;
            }
            else
            {
                cout << j << " ";
            }
        }
        k++;
        cout << endl;
    }
    int l = n;
    for (int i = 1; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << j << " ";
        }
        for (int s = 0; s <= 2 * (n - l); s++)
        {
            cout << i + 1 << " ";
        }
        for (int j = i + 1; j <= n; j++)
        {
            cout << j << " ";
        }
        l--;
        cout << endl;
    }
}

int main()
{

    int n = 4;
    pattern1(n);
    // Output : 
    // 4 4 4 4 4 4 4 
    // 4 3 3 3 3 3 4
    // 4 3 2 2 2 3 4
    // 4 3 2 1 2 3 4
    // 4 3 2 2 2 3 4
    // 4 3 3 3 3 3 4
    // 4 4 4 4 4 4 4

    return 0;
}