#include "Employee.h"



    
Employee :: Employee(string name, int employeeID, float salary){
    this->name = name;
    this->employeeID = employeeID;
}
string Employee :: get_name(){
    return name;
}
void Employee :: set_name(string name){
    this->name = name;
}
int Employee :: get_employeeID(){
    return employeeID;
}
void Employee :: set_employeeID(int employeeID){
    this->employeeID = employeeID;
}
float Employee:: get_salary(){
    return salary;
}
void Employee::set_salary(float salary){
    if (salary < 0) {
        throw invalid_argument("Salary cannot be negative");
    }
    this->salary = salary;
}
