
#include<iostream>
using namespace std;

// METHOD 1: Using Nested Loops (Frequency Counting)
int findUnique1(int arr[], int n) {

    for(int i = 0; i < n; i++) {

        int count = 0;

        for(int j = 0; j < n; j++) {

            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count == 1) {
            return arr[i];
        }
    }

    return -1; // No unique element found
}


// METHOD 2: Using XOR Operator
int findUnique2(int arr[], int n) {

    int ans = 0;

    for(int i = 0; i < n; i++) {

        ans = ans ^ arr[i];

    }

    return ans;
}


int main() {

    int arr[] = {2, 4, -1, 2, 4};
    int size = 5;

    // Method 1: Frequency Counting
    cout << "Using Nested Loops: "
         << findUnique1(arr, size) << endl;

    // Method 2: XOR Operator
    cout << "Using XOR: "
         << findUnique2(arr, size) << endl;

    return 0;
}
