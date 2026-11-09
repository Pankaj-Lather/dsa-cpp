
#include<iostream>
using namespace std;

void reverse(int arr[], int n) {

    int start = 0;
    int end = n - 1;

    while(start < end) {

        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

void printArray(int arr[], int n) {

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {

    int arr[5] = {1, 3, 4, 6, 7};
    int brr[6] = {34, -6, 45, 67, -5, 3};

    reverse(arr, 5);
    reverse(brr, 6);

    cout << "Reversed first array: ";
    printArray(arr, 5);

    cout << "Reversed second array: ";
    printArray(brr, 6);

    return 0;
}
