#include<bits/stdc++.h>
using namespace std;

void bruteforce(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int flag = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                flag++;
            }
        }
        if(flag == 1) {
            cout<<"Req. answer by method 1: "<<arr[i]<<endl;
            return;
        }
    }
}

void betterSolution(int arr[], int n) {
    
    map<int, int> mpp;
    
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }
    
    for(auto it: mpp) {
        if(it.second == 1) {
            cout<<"Req. answer by method 2: "<<it.first<<endl;
            return;
        }
    }
}

void optimalSolution(int arr[], int n) {
    
    int xor1 = 0;
    
    for(int i = 0; i < n; i++) {
        xor1 ^= arr[i];
    }
    
    cout<<"Req. answer by method 3: "<<xor1<<endl;
}

int main() {
    int arr[] = {5,1,5,4,2,1,2};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Array : ";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    bruteforce(arr, n);
    betterSolution(arr, n);
    optimalSolution(arr, n);
}