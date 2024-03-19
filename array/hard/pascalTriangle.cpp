#include <bits/stdc++.h>
using namespace std;

int ncr(int row, int col)
{
    long long ans = 1;

    for (int i = 0; i < col; i++)
    {
        ans = ans * (row - i);
        ans = ans / (i + 1);
    }

    return ans;
}

void type1pascal(int row, int col)
{
    cout << "Result: " << ncr(row - 1, col - 1) << endl;
}

void type2pascal(int row)
{
    vector<int> ans;

    int res = 1;
    ans.push_back(1);

    row--;

    for (int i = 0; i < row; i++)
    {
        res = res * (row - i);
        res = res / (i + 1);
        ans.push_back(res);
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}

void type3pascal(int row)
{
    vector<vector<int>> ans;

    for (int i = 0; i < row; i++)
    {
        vector<int> temp;

        int res = 1;
        temp.push_back(res);

        for (int j = 0; j < i; j++)
        {
            res = res * (i - j);
            res = res / (j + 1);
            temp.push_back(res);
        }

        ans.push_back(temp);
    }

    for (auto it : ans)
    {
        for (auto as : it)
        {
            cout << as << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    // Type 1: You want to print a value in row 'n' and column 'm'
    type1pascal(5, 2);
    cout<<endl;

    // Type 2: print entire row of pascal triangle
    type2pascal(6);
    cout<<endl;

    // Type 3: print entire pascal triangle
    type3pascal(6);
}