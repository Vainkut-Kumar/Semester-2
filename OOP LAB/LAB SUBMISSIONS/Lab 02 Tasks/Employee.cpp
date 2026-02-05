#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee() {
    name = "";
    id = 0;
    baseSalary = 0;
    hoursWorked = 0;
}

Employee::Employee(string n, int i, double b, int h) {
    name = n;
    id = i;
    baseSalary = b;
    hoursWorked = h;
}

double Employee::calculateRegularPay() {
    if (hoursWorked <= 40)
        return baseSalary;
    else
        return baseSalary;
}

double Employee::calculateOvertimePay() {
    if (hoursWorked > 40) {
        int overtimeHours = hoursWorked - 40;
        return overtimeHours * (baseSalary / 40) * 1.5;
    }
    return 0;
}

double Employee::calculateTotalSalary() {
    return calculateRegularPay() + calculateOvertimePay();
}

void Employee::display() {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Base Salary: " << baseSalary << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Overtime Pay: " << calculateOvertimePay() << endl;
    cout << "Total Salary: " << calculateTotalSalary() << endl;
}

bool Employee::compareSalary(Employee e) {
    return calculateTotalSalary() > e.calculateTotalSalary();
}

