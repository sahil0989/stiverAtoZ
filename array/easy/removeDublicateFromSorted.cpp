#include<bits/stdc++.h>
using namespace std;

void bruteForce(int arr[], int n) {
    
    // // with map function
    
    // map<int, int> mpp;
    
    // for(int i  = 0; i < n; i++) {
    //     mpp[arr[i]]++;
    // }
    
    // cout<<"Unique elements : ";
    
    // for(auto it: mpp){
    //     cout<<it.first<<" ";
    // }
    // cout<<endl;
    
    // cout<<"Size of new array : "<<mpp.size()<<endl;
    
    // with set function
    
    set<int> ans;
    
    for(int i = 0; i < n; i++) {
        ans.insert(arr[i]);
    }
    
    cout<<"No. of unique elements : "<<ans.size()<<" and Unique elements are: ";
    for(auto it: ans) {
        cout<<it<<" ";
    }
    cout<<" by brute force"<<endl;
}

void optimalSolution(int arr[], int n) {
    int i = 0, j =1;
    
    while(j < n){
        if(arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
        j++;
    }
    
    cout<<"No. of unique elements : "<<i+1<<" and Unique elements are: ";
    for(int k  = 0; k <= i; k++) {
        cout<<arr[k]<<" ";
    }
    cout<<" by optimal solution"<<endl;
}

int main() {
    int arr[] = {1,1,2,2,2,3,3,4};
    int n  = sizeof(arr)/sizeof(arr[0]);
    
    bruteForce(arr, n);
    optimalSolution(arr, n);
}