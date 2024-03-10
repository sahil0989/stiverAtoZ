#include<bits/stdc++.h>
using namespace std;

void bruteforce(int arr[], int n) {
    int maxCount = 0, count = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            maxCount = max(maxCount, count);
            count = 0;
        }
        if(arr[i] == 1) {
            count++;
        }
    }
    
    maxCount = max(maxCount, count);
    cout<<"Maximum consective one's is "<<maxCount<<endl;
}

int main() {
    int arr[] = {1, 1, 0, 1, 1, 1,1};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Array : ";
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    bruteforce(arr, n);
}