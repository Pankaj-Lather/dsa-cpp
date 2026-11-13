#include <iostream>
using namespace std;

// Function to find intersection of two arrays
void findArrayIntersection(int arr1[], int n, int arr2[], int m) {

    int ans[10000];  // Array to store common elements
    int k = 0;       // Tracks the number of common elements

    // Traverse the first array
    for (int i = 0; i < n; i++) {

        int element = arr1[i];

        // Compare current element with the second array
        for (int j = 0; j < m; j++) {

            if (element == arr2[j]) {

                ans[k] = element;
                k++;

                arr2[j] = -1;  // Mark element as visited
                break;
            }
        }
    }

    // Print the intersection array
    cout << "Intersection: ";

    for (int i = 0; i < k; i++) {
        cout << ans[i] << " ";
    }
}

int main() {

    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 2, 3, 5};

    int n = 5;
    int m = 4;

    findArrayIntersection(arr1, n, arr2, m);

    return 0;
}
