#include<bits/stdc++.h>
using namespace std;

void bruteforce(int arr[], int n) {
    int ans[n];
    
    int temp = arr[0];
    
    for(int i = 1; i < n; i++) {
        ans[i-1] = arr[i];    
    }
    ans[n-1] = temp;
    
    cout<<"Array after rotation: ";
    for(int i = 0; i < n; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

void optimalsolution(int arr[], int n) {
    int temp = arr[0];
    
    for(int i = 0; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    
    arr[n-1] = temp;
    
    cout<<"Array after rotation: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n  = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Array : ";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    bruteforce(arr, n);
    optimalsolution(arr, n);
}