#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {
    private:
    string name;
    int employeeID;
    float salary;

    public:
    Employee (string name, int employeeID, float salary);
    virtual void work() =0;
    string get_name();
    void set_name(string name);
    int get_employeeID();
    void set_employeeID(int employeeID);
    float get_salary();
    void set_salary(float salary);
};

#endif // EMPLOYEE_H