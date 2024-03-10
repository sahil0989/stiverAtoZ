#include <bits/stdc++.h>
using namespace std;

void bruteForce(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[i])
        cout << "Not Sorted Array" << endl;
    }
  }
  cout << "Sorted Array" << endl;
}

void optimalSolution(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1]) {
      cout << "Not Sorted Array" << endl;
      return;
    }
  }
  cout << "Sorted Array" << endl;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  bruteForce(arr, n);
  optimalSolution(arr, n);
}