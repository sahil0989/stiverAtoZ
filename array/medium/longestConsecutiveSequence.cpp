#include <bits/stdc++.h>
using namespace std;

bool findnextEle(vector<int> arr, int ele)
{
    for (auto it : arr)
    {
        if (it == ele)
            return true;
    }

    return false;
}

void bruteforce(vector<int> arr)
{

    int n = arr.size();
    int longSequence = 0;

    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        int count = 1;

        while (findnextEle(arr, x + 1) == true)
        {
            x += 1;
            count += 1;
        }

        longSequence = max(longSequence, count);
    }

    cout << "Longest Consecutive sequence is " << longSequence << endl;
}

void bettersolution(vector<int> arr)
{

    int n = arr.size();
    int longseq = 0, count = 1;

    set<int> st;
    vector<int> ans;

    for (auto it : arr)
    {
        st.insert(it);
    }

    for(auto it: st) {
        ans.push_back(it);
    }

    for (int i = 0; i < st.size() - 1; i++)
    {
        if (ans[i + 1] - ans[i] == 1)
            count++;
        else
            count = 1;

        longseq = max(longseq, count);
    }

    cout << "Longest consecutive sequence is " << longseq << endl;
}

void opitmalSolution(vector<int> arr) {
    
    int n = arr.size();
    int longseq = 0;

    unordered_set<int> st;

    for(auto it: arr) {
        st.insert(it);
    }

    for(auto it: arr){
        if(st.find(it-1) == st.end()) {
            int x = it;
            int count = 1;

            while(st.find(x+1) != st.end()) {
                x++;
                count++;
            }

            longseq = max(longseq, count);
        }
    }

    cout<<"Longest consecutive sequence is "<<longseq<<endl;
    
}

int main()
{
    vector<int> arr = {36, 41, 56, 35, 44, 33, 34, 92, 43, 32, 42};

    bruteforce(arr);
    bettersolution(arr);
    opitmalSolution(arr);

}