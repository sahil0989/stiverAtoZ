// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)

#include <bits/stdc++.h>
using namespace std;

void changeEle(vector<vector<int>> &ans, int n, int m, int row, int col)
{

    for (int i = 0; i < m; i++)
    {
        if (ans[row][i] != 0)
            ans[row][i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (ans[i][col] != 0)
            ans[i][col] = -1;
    }

    ans[row][col] = -1;
}

vector<vector<int>> bruteforce(vector<vector<int>> &matrix, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                changeEle(matrix, n, m, i, j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

vector<vector<int>> bettersolution(vector<vector<int>> &matrix, int n, int m)
{
    int row[n] = {0};
    int col[m] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] || col[j])
            {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};

    int n = matrix.size();
    int m = matrix[0].size();

    // vector<vector<int>> ans = bruteforce(matrix, n, m);
    vector<vector<int>> ans = bettersolution(matrix, n, m);

    cout << "Resultant matrix : " << endl;
    for (auto it : ans)
    {
        for (auto as : it)
        {
            cout << as << " ";
        }
        cout << endl;
    }
}