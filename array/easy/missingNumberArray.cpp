#include<bits/stdc++.h>
using namespace std;

void bruteforce(int arr[], int n, int N) {
    for(int i = 0; i < n; i++) {
        if(arr[i] != i+1 ) {
            cout<<"Missing number is "<<i+1<<endl;
            return;
        }
    }
    cout<<"No missing number found."<<endl;
}

void bettersolution(int arr[], int n, int N) {
    int ans[n+1] = {0};
    
    for(int i = 0; i < n; i++) {
        ans[arr[i]-1] += 1;
    }
    
    for(int i = 0; i < n; i++) {
        if(ans[i] == 0) {
            cout<<"Missing number is "<<i+1<<endl;
            return;
        }
    }
    cout<<"No missing number found."<<endl;
}

void optimalSol1(int arr[], int n, int N) {
    
    int arrSum = 0;
    int sum = (N*(N+1))/2;
    
    for(int i = 0; i < n; i++) {
        arrSum += arr[i];
    }
    
    if(arrSum == sum) {
        cout<<"No missing number found."<<endl;
    } else {
        cout<<"Missing number is "<<sum - arrSum<<endl;
    }
}

void optimalSol2(int arr[], int n, int N) {
    int xor1 = 0, xor2 = 0;
    
    for(int i = 0; i < n; i++) {
        xor1 ^= arr[i];
        xor2 ^= i+1;
    }
    xor2 ^= N;
    
    if((xor1^xor2) == 0) {
        cout<<"No missing number found."<<endl;
    } else {
        cout<<"Missing number is "<< (xor2 ^ xor1) <<endl;
    }
}

int main() {
    int arr[] = {1,2,4,5};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    int N = 5;
    
    cout<<"Array : ";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    bruteforce(arr, n, N);
    bettersolution(arr, n, N);
    optimalSol1(arr, n, N);
    optimalSol2(arr, n, N);
}