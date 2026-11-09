
#include<iostream>
using namespace std;

// Method 1: Using for loop and if condition
void swapAlternate(int arr[], int size) {

    for(int i = 0; i < size; i += 2) {

        // Check whether the next element exists
        if(i + 1 < size) {
            swap(arr[i], arr[i + 1]);
        }
    }
}

/*
Method 2: Using while loop

void swapAlternate(int arr[], int size) {

    int first = 0;
    int second = 1;

    while(second < size) {

        swap(arr[first], arr[second]);

        first += 2;
        second += 2;
    }
}
*/

// Function to print array
void printArray(int arr[], int size) {

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {

    int arr[5] = {1, 3, 4, 6, 7};
    int brr[6] = {34, -6, 45, 67, -5, 3};

    // Swapping alternate elements
    swapAlternate(arr, 5);
    swapAlternate(brr, 6);

    cout << "First array after alternate swapping: ";
    printArray(arr, 5);

    cout << "Second array after alternate swapping: ";
    printArray(brr, 6);

    return 0;
}
