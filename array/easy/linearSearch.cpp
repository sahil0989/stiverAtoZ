#include<bits/stdc++.h>
using namespace std;

void binarySearch(int arr[], int n, int num) {
    for(int i = 0; i < n; i++){
        if(arr[i] == num) {
            cout<<num<<" found at "<<i<<" index."<<endl;
            return;
        }
    }
    cout<<num<<" not found."<<endl;
}

int main() {
    int arr[] = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num  = 3;
    
    binarySearch(arr, n, num); //O(N) S(1)
}