#include<bits/stdc++.h>
using namespace std;

void bruteforce(int arr[], int n, int sum) {
    
    int maxLen = -1;
    
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int arrSum = 0;
            for(int k = i; k <= j; k++) {
                arrSum += arr[k];
            }
            if(arrSum == sum) {
                maxLen = max(maxLen, j-i+1);
            }
        }
    }
    
    cout<<"Maximum req. length by method 1: "<<maxLen<<endl;
}

void betterSolution(int arr[], int n, int sum) {
    
    int maxLen = -1;
    
    for(int i = 0; i < n; i++) {
        int arrSum = 0;
        for(int j = i; j < n; j++) {
            arrSum += arr[j];
            if(arrSum == sum) {
                maxLen = max(maxLen, j-i+1);
            }
        }
    }
    
    cout<<"Maximum req. length by method 2: "<<maxLen<<endl;
}

void optimalSolution(int arr[], int n, int k) {
    map<long long, int> preSum;
    long long sum = 0;
    int maxLen = 0;
    
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(sum == k) {
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - k;
        if(preSum.find(rem) != preSum.end()) {
            int len = i - preSum[rem];
            maxLen = max(maxLen, len);
        }
        if(preSum.find(sum) == preSum.end()) {
            preSum[rem] = i;
        }
    }
    
    cout<<"Maximum req. length by method 3: "<<maxLen<<endl;
}

// Not applicable for -ive
void optimalSol2(int arr[], int n, int k) {
    int left = 0, right = 0;
    long long sum = arr[0]; 
    int maxLen = 0;
    while(right < n) {
        while(sum > k)  {
            sum -= arr[left];
            left++;
        }
        if(sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < n) sum += arr[right];
    }
    
    cout<<"Maximum req. length by method 4: "<<maxLen<<endl;
}

int main() {
    int arr[] = {2,3,5,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bruteforce(arr, n, 10);
    betterSolution(arr, n, 10);
    optimalSolution(arr, n, 10);
    optimalSol2(arr, n, 10);
    
    return 0;
}