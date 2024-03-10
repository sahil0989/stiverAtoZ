#include<bits/stdc++.h>
using namespace std;

void bruteforce(int arr[], int n, int k) {
    
    for(int i = 0; i < k; i++) {
        int temp = arr[0];
        for(int j = 0; j < n-1; j++) {
            arr[j] = arr[j+1];
        }
        arr[n-1] = temp;
    }
    
    cout<<"Result : ";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void optimalSolution(int arr[], int n, int k) {
    
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);
    
    cout<<"Result: ";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bruteforce(arr, n, 3);
    optimalSolution(arr, n, 3);
}