#include <iostream>
#include <limits> 

using namespace std;

class Calculator {
public:
    
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    float add(float a, float b) {
        return a + b;
    }

    
    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    float divide(float a, float b) {
        if (b == 0) {
            cerr << "Error: Division by zero" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;
    int choice;

    cout << "=== Simple Calculator ===" << endl;
    cout << "1. Add two integers" << endl;
    cout << "2. Add three integers" << endl;
    cout << "3. Add two floats" << endl;
    cout << "4. Subtract two integers" << endl;
    cout << "5. Multiply two integers" << endl;
    cout << "6. Divide two floats" << endl;

    do {
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (cin.fail()) {
            cout << "Invalid input. Please enter a number between 1 and 6." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1: {
                int num1, num2;
                cout << "Enter two integers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.add(num1, num2) << endl;
                break;
            }
            case 2: {
                int num1, num2, num3;
                cout << "Enter three integers: ";
                cin >> num1 >> num2 >> num3;
                cout << "Result: " << calc.add(num1, num2, num3) << endl;
                break;
            }
            case 3: {
                float num1, num2;
                cout << "Enter two floats: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.add(num1, num2) << endl;
                break;
            }
            case 4: {
                int num1, num2;
                cout << "Enter two integers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.subtract(num1, num2) << endl;
                break;
            }
            case 5: {
                int num1, num2;
                cout << "Enter two integers: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.multiply(num1, num2) << endl;
                break;
            }
            case 6: {
                float num1, num2;
                cout << "Enter two floats: ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.divide(num1, num2) << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
        }
        cout << endl; // Add an empty line for better readability
    } while (true); // Keep the calculator running until manually stopped (Ctrl+C)

    return 0;
}