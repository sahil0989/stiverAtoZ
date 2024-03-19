#include <bits/stdc++.h>
using namespace std;

vector<int> bruteforce(vector<int> arr)
{
    vector<int> ans;
    set<int> st;

    int n = arr.size();
    int mini = n / 3;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > mini)
            st.insert(arr[i]);
    }

    for (auto it : st)
    {
        ans.push_back(it);
    }

    return ans;
}

vector<int> betterSolution(vector<int> arr)
{
    map<int, int> mpp;
    vector<int> ans;

    int n = arr.size();
    int mini = n / 3;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second > mini)
            ans.push_back(it.first);
    }

    return ans;
}

vector<int> majorityElement(vector<int> v)
{
    vector<int> ans;

    int n = v.size();
    int count1 = 0, count2 = 0;
    int ele1 = INT_MIN, ele2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (count1 == 0 && ele2 != v[i])
        {
            ele1 = v[i];
            count1++;
        }
        else if (count2 == 0 && ele1 != v[i])
        {
            ele2 = v[i];
            count2++;
        }
        else if (ele1 == v[i])
            count1++;
        else if (ele2 == v[i])
            count2++;
        else
        {
            count1--;
            count2--;
        }
    }

    int mini = n / 3;
    count1 = 0;
    count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (ele1 == v[i])
            count1++;
        if (ele2 == v[i])
            count2++;
    }

    cout << ele1 << " " << ele2 << endl;

    if (count1 > mini)
        ans.push_back(ele1);
    if (count2 > mini)
        ans.push_back(ele2);

    return ans;
}

int main()
{
    vector<int> arr = {11, 33, 33, 11, 33, 11};

    // vector<int> ans = bruteforce(arr);

    vector<int> ans = betterSolution(arr);

    // optimal solution
    //  vector<int> ans = majorityElement(arr);

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}