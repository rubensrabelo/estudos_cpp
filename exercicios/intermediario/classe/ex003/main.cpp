#include<iostream>

#include "src/Student.cpp"

using namespace std;
using namespace School;

int main(){
    Student student(1, "Marcio Lourendo", 50);

    cout << "Register: " << student.getRegistration() << endl;
    cout << "Name: " << student.getName() << endl;
    
    if(student.status()) {
        cout << "Status: APROVADO" << endl;
    } else {
        cout << "Status: REPROVADO" << endl;
    }

    return 0;
}