#include<iostream>
#include<string>

using namespace std;

struct Student {
    int registration;
    string name;
    int grade[3];

    double average() {
        double sum = this->grade[0] + this->grade[1] + this->grade[2];
        return sum/3;  
    }
};

int main() {
    Student students[5];

    students[0] = {101, "Alice", {85, 90, 92}};
    students[1] = {102, "Bob", {78, 83, 88}};
    students[2] = {103, "Charlie", {93, 95, 91}};
    students[3] = {104, "David", {80, 82, 85}};
    students[4] = {105, "Eve", {88, 87, 90}};

    Student student;
    double highestGrade = 0.0;

    for(int i = 0; i<5; i++){
        if(i == 0) {
            highestGrade = students[0].average();
            student = students[0];
        } else {
            if(students[i].average() > highestGrade) {
                highestGrade = students[i].average();
                student = students[i];
            }
        }
    }

    cout << "Student = " << student.name << endl;
    cout << "Grade = " << student.grade[0] << endl;
    cout << "Grade = " << student.grade[1] << endl;
    cout << "Grade = " << student.grade[2] << endl;

    return 0;
}