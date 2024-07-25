#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include "Employee.h"
using namespace std;

class Manager : public virtual Employee{
    private:
    string department;

    public:
    Manager(string name, int employeeID, float salary, string department);
    void set_department(string department);
    string get_department();
    void work();
    static void swap_departments(Manager& manager1, Manager& manager2);

};
#endif // MANAGER_H