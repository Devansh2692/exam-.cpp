#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    // Private attributes
    string name;
    double salary;
    string designation;

public:
    // Public setter for name
    void setName(const string &n) {
        name = n;
    }

    // Public setter for salary
    void setSalary(double s) {
        if (s > 0) {
            salary = s;
        } else {
            cout << "Salary must be positive!" << endl;
        }
    }

    // Public setter for designation
    void setDesignation(const string &d) {
        designation = d;
    }

    // Public getter for name
    string getName() const {
        return name;
    }

    // Public getter for salary
    double getSalary() const {
        return salary;
    }

    // Public getter for designation
    string getDesignation() const {
        return designation;
    }

    // Public method to display employee details
    void displayEmployeeInfo() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Designation: " << designation << endl;
        cout << "Employee Salary: $" << salary << endl;
    }
};

int main() {
    // Create an Employee object
    Employee emp;

    // Set values using setter functions
    emp.setName("John Doe");
    emp.setDesignation("Software Engineer");
    emp.setSalary(75000);

    // Display employee details using the display method
    emp.displayEmployeeInfo();

    // Access the attributes using getter functions and display them individually
    cout << "\nUsing Getter Functions:" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Designation: " << emp.getDesignation() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;

    return 0;
}
