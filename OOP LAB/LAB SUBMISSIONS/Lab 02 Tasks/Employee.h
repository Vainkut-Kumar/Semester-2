#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double baseSalary;
    int hoursWorked;

public:
    Employee();
    Employee(string, int, double, int);

    double calculateRegularPay();
    double calculateOvertimePay();
    double calculateTotalSalary();

    void display();

    bool compareSalary(Employee);
};

#endif

