#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Engineer.h"

int main(){
    Manager manager1 = Manager("Elie", 44, 3000, "HR");
    manager1.work();

    Manager manager2 = Manager("Paul", 45, 2000, "Marketing");
    manager2.work();
    Manager::swap_departments(manager1, manager2);
    manager1.work();
    manager2.work();

    Engineer engineer1 = Engineer("Carl",46, 2000, "Electrical");
    engineer1.set_speciality("Software");
    engineer1.work();

    float newSalary = -5000;
    manager1.set_salary(newSalary);
    cout << manager1.get_salary()<< endl;
    return 0;
}