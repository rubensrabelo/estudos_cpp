#pragma once

#include<string>

namespace School {
    class Student {
        public:
            Student(int registration, string name, double finalGrade);
            
            int getRegistration();

            void setName(string name);
            string getName();

            void setFinalGrade(double finalGrade);
            double getFinalGrade();

            bool status();
        private:
            int registration;
            string name;
            double finalGrade;
    };
}