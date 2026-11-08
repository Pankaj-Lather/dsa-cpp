
#include<iostream>
using namespace std;

int addition(int jaiho[], int size) {

    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum = sum + jaiho[i];
    }

    return sum;
}

int main() {

    int size;
    cin >> size;

    int arr[100];

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int result = addition(arr, size);

    cout << "Sum is: " << result;

    return 0;
}
