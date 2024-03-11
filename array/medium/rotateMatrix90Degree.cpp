#include <bits/stdc++.h>
using namespace std;

void bruteforce(vector<vector<int>> &matrix, int n, int m)
{
    vector<vector<int>> ans(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans[j][n - i - 1] = matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = ans[i][j];
        }
    }
}

void optimalSolution(vector<vector<int>> &matrix, int n, int m)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = matrix.size();
    int m = matrix[0].size();

    // bruteforce(matrix, n, m);
    optimalSolution(matrix, n, m);

    cout << "Resultant matrix : " << endl;

    for (auto it : matrix)
    {
        for (auto as : it)
        {
            cout << as << " ";
        }
        cout << endl;
    }
}