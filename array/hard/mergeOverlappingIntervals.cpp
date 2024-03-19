#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> bruteforce(vector<vector<int>> &arr)
{
    vector<vector<int>> ans;

    int n = arr.size();
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (!ans.empty() && arr[i][1] <= ans.back()[1])
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j][0] <= arr[i][1])
                arr[i][1] = max(arr[i][1], arr[j][1]);
            else
                break;
        }
        ans.push_back({arr[i][0], arr[i][1]});
    }

    return ans;
}

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr)
{
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (ans.empty() || arr[i][0] > ans.back()[1])
            ans.push_back(arr[i]);
        else
            ans.back()[1] = max(arr[i][1], ans.back()[1]);
    }

    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 9}, {9, 11}, {8, 10}, {2, 4}, {15, 18}, {16, 17}};

    // vector<vector<int>> ans = bruteforce(arr);
    vector<vector<int>> ans = mergeOverlappingIntervals(arr);

    for (auto it : ans)
    {
        cout << "[ ";
        for (auto as : it)
        {
            cout << as << " ";
        }
        cout << "] ";
    }
    cout << endl;
}