
#include <iostream>
using namespace std;

int main() {
    int amount = 1330;
    int notes;

    cout << "Total amount: Rs. " << amount << "\n\n";

    switch (100) {
        case 100:
            notes = amount / 100;
            amount = amount % 100;
            cout << "Rs. 100 notes: " << notes << endl;
    }

    switch (50) {
        case 50:
            notes = amount / 50;
            amount = amount % 50;
            cout << "Rs. 50 notes: " << notes << endl;
    }

    switch (20) {
        case 20:
            notes = amount / 20;
            amount = amount % 20;
            cout << "Rs. 20 notes: " << notes << endl;
    }

    switch (10) {
        case 10:
            notes = amount / 10;
            amount = amount % 10;
            cout << "Rs. 10 notes: " << notes << endl;
    }

    switch (1) {
        case 1:
            notes = amount / 1;
            amount = amount % 1;
            cout << "Rs. 1 notes: " << notes << endl;
    }

    return 0;
}
