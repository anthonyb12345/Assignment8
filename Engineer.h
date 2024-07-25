# include<iostream>
# include"Employee.h"
using namespace std;

class Engineer : public virtual Employee{
    private:
    string speciality;

    public:
    Engineer(string name, int employeeID, float salary, string speciality);
    void set_speciality(string speciality);
    string get_speciality();
    void work();

};