#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> bruteforce(vector<int> &nums, int target)
{
    set<vector<int>> st;

    int n = nums.size();

    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            for (int k = j + 1; k < n - 1; k++)
            {
                int sum = nums[i] + nums[j] + nums[k];
                for (int m = k + 1; m < n; m++)
                {
                    if (sum + nums[m] == target)
                    {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[m]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());

    return ans;
}

vector<vector<int>> betterSolution(vector<int> &nums, int target)
{
    set<vector<int>> st;

    int n = nums.size();

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            set<int> hashset;

            for (int k = j + 1; k < n; k++)
            {
                int sum = nums[i] + nums[j] + nums[k];
                int rem = target - sum;

                if (hashset.find(rem) != hashset.end())
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], rem};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }

                hashset.insert(nums[k]);
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());

    return ans;
}

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    vector<vector<int>> ans;

    int n = nums.size();
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int left = j + 1, right = n - 1;

            while (left < right)
            {
                int sum = nums[i] + nums[j] + nums[left] + nums[right];

                if (sum > target)
                    right--;
                else if (sum < target)
                    left++;
                else
                {
                    vector<int> temp = {nums[i], nums[j], nums[left], nums[right]};
                    sort(temp.begin(), temp.end());
                    ans.push_back(temp);
                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1])
                        left++;
                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                }
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    int target = 0;

    // vector<vector<int>> ans = bruteforce(arr, target);
    // vector<vector<int>> ans = betterSolution(arr, target);
    vector<vector<int>> ans = fourSum(arr, target);

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