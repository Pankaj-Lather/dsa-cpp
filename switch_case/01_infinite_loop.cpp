
#include <iostream>
using namespace std;

// Method 1: Using a flag variable
void method1() {
    bool running = true;

    while (running) {
        int choice;
        cout << "\nMethod 1: Enter 0 to exit: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Option 1 selected\n";
                break;

            case 0:
                running = false;
                break;

            default:
                cout << "Invalid choice\n";
        }
    }

    cout << "Loop exited using a flag variable.\n";
}

// Method 2: Using return 0
void method2() {
    while (true) {
        int choice;
        cout << "\nMethod 2: Enter 0 to exit: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Option 1 selected\n";
                break;

            case 0:
                cout << "Exiting the program...\n";
                return;
        }
    }
}

// Method 3: Using break outside the switch
void method3() {
    while (true) {
        int choice;
        cout << "\nMethod 3: Enter 0 to exit: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Option 1 selected\n";
                break;

            case 0:
                cout << "Exit requested\n";
                break;
        }

        if (choice == 0) {
            break;
        }
    }

    cout << "Loop exited using break outside switch.\n";
}

int main() {
    int method;

    cout << "Choose a method:\n";
    cout << "1. Flag variable\n";
    cout << "2. Return statement\n";
    cout << "3. Break outside switch\n";
    cout << "Enter method number: ";
    cin >> method;

    switch (method) {
        case 1:
            method1();
            break;

        case 2:
            method2();
            break;

        case 3:
            method3();
            break;

        default:
            cout << "Invalid method selected.\n";
    }

    cout << "\nProgram ended.\n";
    return 0;
}
