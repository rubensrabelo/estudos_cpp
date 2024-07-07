#include "../include/School.h"

namespace School {
    Student::Student(int registration, std::string name, double finalGrade) {
        this->registration = registration;
        this->name = name;
        this->finalGrade = finalGrade;
    }

    int Student::getRegistration() {
        return this->registration;
    }

    void Student::setName(std::string name) {
        this->name = name;
    }

    std::string Student::getName() {
        return this->name;
    }

    void Student::setFinalGrade(double finalGrade) {
        this->finalGrade = finalGrade;
    }

    double Student::getFinalGrade() {
        return this->finalGrade;
    }

    bool Student::status() {
        return getFinalGrade() >= 60;
    }
}
