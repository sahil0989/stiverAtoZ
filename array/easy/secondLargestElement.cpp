#include <bits/stdc++.h>
using namespace std;

void bruteForce(vector<int> arr, int n) {
  int i, j, min_idx;

  for (i = 0; i < n - 1; i++) {
    min_idx = i;
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_idx])
        min_idx = j;
    }

    if (min_idx != i)
      swap(arr[min_idx], arr[i]);
  }

  int slargest = -1;
  for (int i = n - 2; i >= 0; i--) {
    if (arr[i] != arr[n - 1]) {
      slargest = arr[i];
      break;
    }
  }
  cout << "Second largest element is: " << slargest << endl;
}

void optimalSoltion(vector<int> arr, int n) {
  int largest = arr[0];
  int slargest = -1;

  for (int i = 0; i < n; i++) {
    if (arr[i] > largest) {
      slargest = largest;
      largest = arr[i];
    } else if (arr[i] < largest && arr[i] > slargest) {
      slargest = arr[i];
    }
  }

  cout << "Second largest element is: " << slargest << endl;
}

int main() {
  vector<int> arr = {1, 2, 4, 7, 7, 5, 7, 6};
  int n = arr.size();

  bruteForce(arr, n);
  optimalSoltion(arr, n);
}