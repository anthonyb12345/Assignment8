# include "Engineer.h"



    
Engineer::Engineer(string name, int employeeID,float salary, string speciality)
:Employee(name,employeeID,salary){
    this->speciality = speciality;
}
void Engineer:: set_speciality(string speciality){
    try {
        if (speciality == "Software") {
            throw invalid_argument("Software is not a real engineering speciality");
        }
        this->speciality = speciality;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << std::endl;
        this->speciality = "General";
    }
}
string Engineer::get_speciality(){
    return speciality;
}
void Engineer::work(){
    cout << get_name() << " is specialized in " << speciality << " engineering." << endl;
}

