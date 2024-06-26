#include<iostream>

using namespace std;

struct Employee {
    int id;
    string name;
    string departament;
};

void showStruct(Employee employee);

int main(){
    Employee employee;

    employee.id = 1;
    employee.name = "Raimundo";
    employee.departament = "Vendas";

    showStruct(employee);

    return 0;
}

void showStruct(Employee employee){
    cout << "-------------------------------" << endl;
    cout << "ID: " << employee.id << endl;
    cout << "ID: " << employee.name << endl;
    cout << "ID: " << employee.departament << endl;
    cout << "-------------------------------" << endl;
}