#include <bits/stdc++.h>
using namespace std;

int bruteforce(vector<int> &arr)
{
    int max_product = 1;

    for (int i = 0; i < arr.size(); i++)
    {
        int prod = 1;
        for (int j = i; j < arr.size(); j++)
        {
            prod *= arr[j];

            max_product = max(prod, max_product);
        }
    }

    return max_product;
}

int subarrayWithMaxProduct(vector<int> &arr)
{
    int max_prod = 0, suffix = 1, prefix = 1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (suffix == 0)
            suffix = 1;
        if (prefix == 0)
            prefix = 1;
        prefix *= arr[i];
        suffix *= arr[arr.size() - i - 1];

        max_prod = max(max_prod, max(suffix, prefix));
    }

    return max_prod;
}

int main()
{
    vector<int> arr = {1, 2, -3, 0, -4, -5};

    // int ans = bruteforce(arr);
    int ans = subarrayWithMaxProduct(arr);

    cout << "Max Product of sub-array is " << ans << endl;
}