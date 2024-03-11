#include <bits/stdc++.h>
using namespace std;

void bruteforce(int arr[], int n)
{
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                flag++;
            }
        }
        if (flag == 0)
        {
            ans.push_back(arr[i]);
        }
    }

    cout << "Leader's in array: [ ";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << "]" << endl;
}

void optimalSolution(int arr[], int n){
    int max = INT_MIN;
    vector<int> ans;

    for(int i = n-1; i >= 0; i--) {
        if(arr[i] > max) {
            ans.push_back(arr[i]);
            max = arr[i];
        }
    }

    cout << "Leader's in array: [ ";
    for(int i = ans.size()-1; i >=0; i--){
        cout<<ans[i]<<" ";
    }
    cout << "]" << endl;
}

int main()
{
    int arr[] = {10, 22, 12, 3, 0, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    bruteforce(arr, n);
    optimalSolution(arr, n);
}