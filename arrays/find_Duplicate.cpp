
#include<iostream>
using namespace std;

// METHOD 1: Brute Force Approach (Frequency Counting)
int findDuplicate1(int arr[], int n) {

    for(int i = 0; i < n; i++) {

        int count = 0;

        for(int j = 0; j < n; j++) {

            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count == 2) {
            return arr[i];
        }
    }

    return -1;
}


// METHOD 2: Optimized Approach (XOR)
int findDuplicate2(int arr[], int n) {

    int ans = 0;

    // XOR all array elements
    for(int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }

    // XOR numbers from 1 to n-1
    for(int i = 1; i < n; i++) {
        ans = ans ^ i;
    }

    return ans;
}


int main() {

    int arr[] = {1, 2, 3, 4, 2};
    int size = 5;

    // Method 1: Brute Force
    cout << "Using Brute Force: "
         << findDuplicate1(arr, size) << endl;

    // Method 2: XOR
    cout << "Using XOR: "
         << findDuplicate2(arr, size) << endl;

    return 0;
}
