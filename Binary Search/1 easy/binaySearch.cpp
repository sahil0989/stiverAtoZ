#include <bits/stdc++.h>
using namespace std;

int bruteforce(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
            return i;
    }

    return -1;
}

int search(vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main()
{
    vector<int> nums = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 7;

    // int ind = bruteforce(nums, target);
    int ind = search(nums, target);

    if (ind == -1)
        cout << "The target is not present." << endl;
    else
        cout << "The target is at index: "
             << ind << endl;
    return 0;
}