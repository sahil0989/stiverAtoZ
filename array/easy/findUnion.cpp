#include<bits/stdc++.h>
using namespace std;

void solution1(int arr[], int ans[], int n, int m) {
    map<int, int> mpp;
    
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }
    for(int i = 0; i < m; i++) {
        mpp[ans[i]]++;
    }
    
    cout<<"Result 1: ";
    for(auto it: mpp) {
        cout<<it.first<<" ";
    }
    cout<<endl;
}

void solution2(int arr[], int ans[], int n, int m) {
    set<int> st;
    
    for(int i = 0; i < n; i++) {
        st.insert(arr[i]);
    }
    
    for(int i = 0; i < m; i++) {
        st.insert(ans[i]);
    }
    
    cout<<"Result 2: ";
    for( auto it: st) {
        cout<<it<<" ";
    }
    cout<<endl;
}

void solution3(int arr1[], int arr2[], int n, int m) {
    int ans[n+m];
    int i = 0, j = 0, k = 0;
    while(i < n && j < m) {
        if(arr1[i] <= arr2[j] && ans[k-1] != arr1[i]){
            ans[k] = arr1[i];
            k++;
            i++;
        }
        if(arr1[i] > arr2[j] && ans[k-1] != arr2[j]){
            ans[k] = arr2[j];
            k++;
            j++;
        }
        if(arr1[i] <= arr2[j] && ans[k-1] == arr2[j]) i++;
        if(arr1[i] > arr2[j] && ans[k-1] == arr2[j]) j++;
    }
    
    while(i < n) {
        ans[k] = arr1[i];
        i++;
        k++;
    }
     
    while(j < m) {
        ans[k] = arr2[j];
        j++;
        k++;
    }
    
    cout<<"Result 3: ";
    for(int i = 0; i < k; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr1[] = {1,2,3,4,5,7};
    int arr2[] = {2,3,5,6};
    
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    
    cout<<"Array 1: ";
    for(int i = 0; i < n; i++) {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Array 2: ";
    for(int i = 0; i < m; i++) {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    
    solution1(arr1, arr2, n, m);
    solution2(arr1, arr2, n, m);
    solution3(arr1, arr2, n, m);
    
}