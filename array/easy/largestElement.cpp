#include <bits/stdc++.h>
using namespace std;

void bruteForce(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int low = i;

        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[low])
            {
                low = j;
            }
        }

        swap(arr[i], arr[low]);
    }

    cout << "Largest Element by brute force: " << arr[n - 1] << endl;
}

void optimalSolution(int arr[], int n) {
    
    int largest = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        if(largest < arr[i]) {
            largest = arr[i];
        }
    }

    cout<<"Largest Element by optimal solution : "<<largest<<endl;
}

int main()
{

    int arr[] = {3, 8, 2, 7, 2, 1};
    int n = 6;

    bruteForce(arr, n);
    optimalSolution(arr, n);
}