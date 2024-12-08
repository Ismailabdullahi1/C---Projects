#include <iostream>
#include <limits>  // for numeric_limits

using namespace std;

void showMenu() {
    cout << "Simple Calculator\n";
    cout << "====================\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Exit\n";
    cout << "====================\n";
    cout << "Enter your choice (1-5): ";
}

void add(double a, double b) {
    cout << "Result: " << a + b << endl;
}

void subtract(double a, double b) {
    cout << "Result: " << a - b << endl;
}

void multiply(double a, double b) {
    cout << "Result: " << a * b << endl;
}

void divide(double a, double b) {
    if (b != 0) {
        cout << "Result: " << a / b << endl;
    } else {
        cout << "Error: Division by zero is not allowed!" << endl;
    }
}

int main() {
    int choice;
    double num1, num2;

    while (true) {
        showMenu();

        // Get valid input from the user
        while (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number between 1 and 5.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter your choice (1-5): ";
        }

        if (choice == 5) {
            cout << "Exiting the calculator. Goodbye!\n";
            break;
        }

        // Get valid numbers for calculations
        cout << "Enter the first number: ";
        while (!(cin >> num1)) {
            cout << "Invalid input. Please enter a valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter the first number: ";
        }

        cout << "Enter the second number: ";
        while (!(cin >> num2)) {
            cout << "Invalid input. Please enter a valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter the second number: ";
        }

        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            default:
                cout << "Invalid choice. Please select a valid option (1-5).\n";
        }
    }

    return 0;
}
