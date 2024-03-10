#include<bits/stdc++.h>
using namespace std;

void bruteforce(int arr[], int n) {
    int k = 0;
    int ans[n];
    
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            ans[k] = arr[i];
            k++;
        }
    }
    
    for(int i = k; i < n; i++){
        ans[i] = 0;
    }
    
    cout<<"Result : ";
    for(int i  = 0; i < n; i++) {
        cout<<ans[i] << " ";
    }
    cout<<endl;
}

void optimalSolution(int arr[], int n) {
    int i = 0, j = 0;
    
    while(j < n){
        if(arr[j] != 0){
            arr[i] = arr[j];
            i++;
        }
        j++;
    }
    for(int k = i; k < n; k++){
        arr[k] = 0;
    }
    
    cout<<"Result : ";
    for(int i  = 0; i < n; i++) {
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Array : ";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    bruteforce(arr, n);
    optimalSolution(arr, n);
}