#include <bits/stdc++.h>
using namespace std;

vector<int> bruteforce(vector<int> a)
{
  int repetition = -1, missing = -1;

  for (int i = 1; i <= a.size(); i++) {
    int count = 0;
    for (int j = 0; j < a.size(); j++) {
      if (a[j] == i)
        count++;
    }
    if (count == 2)
      repetition = i;
    if (count == 0)
      missing = i;
  }

  return {repetition, missing};
}

vector<int> betterSolution(vector<int> a)
{
    map<int, int> mpp;

  int repetition = -1, missing = -1;

  for (int i = 0; i < a.size(); i++) {
    mpp[a[i]]++;
  }

  for (int i = 1; i <= a.size(); i++) {
    if (mpp[i] == 0)
      missing = i;
    if (mpp[i] == 2)
      repetition = i;
  }

  return {repetition, missing};
}

vector<int> findMissingRepeatingNumbers(vector<int> a)
{
    long long n = a.size();

  long long sum = (n * (n + 1)) / 2;
  long long squareSum = (n * (n + 1) * (2 * n + 1)) / 6;

  long long arrSum = 0, arrSquareSum = 0;

  for (int i = 0; i < n; i++) {
    arrSum += a[i];
    arrSquareSum += a[i] * a[i];
  }

  long long sumDiff = arrSum - sum;
  long long squareDiff = arrSquareSum - squareSum;

  long long rep = (sumDiff + (squareDiff / sumDiff)) / 2;

  long long mis = rep - sumDiff;

  return {int(rep), int(mis)};
}

int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};

    // vector<int> ans = bruteforce(a);
    // vector<int> ans = betterSolution(a);
    vector<int> ans = findMissingRepeatingNumbers(a);

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}