#include<iostream>

using namespace std;

struct Student {
    int registration;
    string name;
    double finalGrande;
};

bool status(Student student);

void showStudent(const Student student);

int main(){
    Student stdt1 {1, "Marcos", 8.5};
    Student stdt2 {2, "Luiz", 5};
    Student stdt3 {3, "Ana", 10};

    showStudent(stdt1);
    showStudent(stdt2);
    showStudent(stdt3);

    return 0;
}

bool status(Student student) {
    return student.finalGrande >= 6; 
}

void showStudent(const Student student) {
    cout << "------------------------------------" << endl;
    cout << "Name: " << student.name << endl;

    bool situation = status(student);

    if(situation) {
        cout << "Situation: Approved" << endl;
    } else {
        cout << "Situation: Disapproved" << endl;
    }

    cout << "------------------------------------" << endl;
    cout << endl;
}