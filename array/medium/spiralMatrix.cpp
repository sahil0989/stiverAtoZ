#include <bits/stdc++.h>
using namespace std;

vector<int> bruteforce(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> ans;

    int left = 0, top = 0, right = n - 1, bottom = m - 1;

    while (left <= right && top <= bottom)
    {

        for (int i = left; i <= right; i++)
            ans.push_back(matrix[top][i]);
        top++;

        for (int i = top; i <= bottom; i++)
            ans.push_back(matrix[i][right]);
        right--;

        if (left <= right)
        {
            for (int i = right; i >= left; i--)
                ans.push_back(matrix[bottom][i]);
            bottom--;
        }

        if (top <= bottom)
        {
            for (int i = bottom; i >= top; i--)
                ans.push_back(matrix[i][left]);
            left++;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> ans = bruteforce(matrix);

    for (auto it : ans)
    {
        cout << it << " ";
    }
}