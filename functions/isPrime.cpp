#include <iostream>
using namespace std;

// 1 -> Prime number
// 0 -> Not a prime number
bool isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i < n; i++) {
        // If n is divisible by i, it is not prime
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    if (isPrime(n)) {
        cout << "Prime Number" << endl;
    } else {
        cout << "Not a Prime Number" << endl;
    }
    return 0;
}
