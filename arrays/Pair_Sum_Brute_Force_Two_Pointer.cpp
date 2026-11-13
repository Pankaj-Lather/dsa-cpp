
#include <iostream>
#include <algorithm>
using namespace std;

// METHOD 1: Brute Force Approach
void pairSumBruteForce(int arr[], int size, int sum) {

    bool found = false;

    for(int i = 0; i < size; i++) {

        for(int j = i + 1; j < size; j++) {

            if(arr[i] + arr[j] == sum) {

                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
                found = true;
            }
        }
    }

    if(!found) {
        cout << "No pair found" << endl;
    }
}

// METHOD 2: Two Pointer Approach
void pairSumTwoPointer(int arr[], int size, int sum) {

    // Sort the array
    sort(arr, arr + size);

    int start = 0;
    int end = size - 1;

    bool found = false;

    while(start < end) {

        int currentSum = arr[start] + arr[end];

        if(currentSum == sum) {

            cout << "(" << arr[start] << ", " << arr[end] << ")" << endl;

            found = true;

            start++;
            end--;
        }

        else if(currentSum < sum) {
            start++;
        }

        else {
            end--;
        }
    }

    if(!found) {
        cout << "No pair found" << endl;
    }
}

int main() {

    int n, sum;
    int arr[100];

    cout << "Enter array size: ";
    cin >> n;

    if(n < 1 || n > 100) {
        cout << "Invalid array size";
        return 0;
    }

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> sum;

    cout << "\nBrute Force Approach:" << endl;
    pairSumBruteForce(arr, n, sum);

    cout << "\nTwo Pointer Approach:" << endl;
    pairSumTwoPointer(arr, n, sum);

    return 0;
}
