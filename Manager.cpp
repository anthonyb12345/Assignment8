#include "Manager.h"


Manager::Manager(string name, int employeeID, float salary, string department)
: Employee(name,employeeID,salary){
    this->department = department;
}
void  Manager::set_department(string department){
    this->department = department;
}
string Manager::get_department(){
    return department;
}
void Manager::work(){
    cout << get_name() << " is managing the " << department << " department." << endl;
}
void Manager::swap_departments(Manager& manager1, Manager& manager2){
        string tempDepartment = manager1.get_department();
        manager1.set_department(manager2.get_department());
        manager2.set_department(tempDepartment);
    }

