#pragma once

#include <string>

namespace School {
    class Student {
    public:
        Student(int registration, std::string name, double finalGrade);

        int getRegistration();

        void setName(std::string name);
        std::string getName();

        void setFinalGrade(double finalGrade);
        double getFinalGrade();

        bool status();
    private:
        int registration;
        std::string name;
        double finalGrade;
    };
}
