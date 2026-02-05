#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    Employee e1("Ali", 101, 40000, 45);
    Employee e2("Ahmed", 102, 40000, 38);

    e1.display();
    cout << endl;
    e2.display();
    cout << endl;

    if (e1.compareSalary(e2))
        cout << "Employee 1 has higher salary" << endl;
    else
        cout << "Employee 2 has higher salary" << endl;

    return 0;
}

