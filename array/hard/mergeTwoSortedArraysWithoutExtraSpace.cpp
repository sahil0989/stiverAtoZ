#include <bits/stdc++.h>
using namespace std;

void bruteforce(vector<long long> &a, vector<long long> &b)
{
    vector<int> arr;

    for (int i = 0; i < a.size(); i++)
    {
        arr.push_back(a[i]);
    }
    for (int j = 0; j < b.size(); j++)
    {
        arr.push_back(b[j]);
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < a.size() + b.size(); i++)
    {
        if (i < a.size())
            a[i] = arr[i];
        else
            b[i - a.size()] = arr[i];
    }
}

void swapGreaterEle(vector<long long> &a, vector<long long> &b, int index1, int index2)
{
    if (a[index1] > b[index2])
    {
        swap(a[index1], b[index2]);
    }
}

void optimalSolution(vector<long long> &a, vector<long long> &b)
{
    int n = a.size(), m = b.size();
  int len = n + m;
  int gap = int(len / 2) + (len % 2);

  while (gap > 0) {
    int left = 0, right = gap;

    while (right < len) {
      if (left < n && right >= n) {
        swapGreaterEle(a, b, left, right - n);
      } else if (left >= n && right < len) {
        swapGreaterEle(b, b, left - n, right - n);
      } else {
        swapGreaterEle(a, a, left, right);
      }
      left++;
      right++;
    }
    if (gap == 1)
      break;
    gap = int(gap / 2) + (gap % 2);
  }
}

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b)
{
    int n = a.size(), m = b.size();

    int left = n - 1, right = 0;

    while (left > 0 && right < m)
    {
        if (a[left] > b[right])
        {
            swap(a[left], b[right]);
            left--;
            right++;
        }
        else
            break;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
}

int main()
{
    vector<long long> a = {1, 4, 8, 10};
    vector<long long> b = {2, 3, 9};

    // bruteforce(a, b);
    // optimalSolution(a, b);
    mergeTwoSortedArraysWithoutExtraSpace(a, b);

    cout << "Array 1: ";
    for (auto it : a)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << "Array 2: ";
    for (auto it : b)
    {
        cout << it << " ";
    }
    cout << endl;
}