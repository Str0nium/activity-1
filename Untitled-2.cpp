#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Employee {
public:
    virtual void showDetails() {
        cout << "Employee details." << endl;
    }
};

class Manager : public Employee {
public:
    void showDetails() override {
        cout << "I am a Manager. I manage teams." << endl;
    }
};

class Developer : public Employee {
public:
    void showDetails() override {
        cout << "I am a Developer. I write code." << endl;
    }
};

int main() {
    int choice;
    Employee* employeePtr = nullptr;

    cout << "What type of employee would you like to create?" << endl;
    cout << "1. Manager" << endl;
    cout << "2. Developer" << endl;

    do {
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;

        if (cin.fail()) {
            cout << "Invalid input. Please enter 1 or 2." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (choice == 1) {
            employeePtr = new Manager();
            break;
        } else if (choice == 2) {
            employeePtr = new Developer();
            break;
        } else {
            cout << "Invalid choice. Please enter 1 or 2." << endl;
        }
    } while (true);

    if (employeePtr != nullptr) {
        employeePtr->showDetails();
        delete employeePtr;
    }

    return 0;
}