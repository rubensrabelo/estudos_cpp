#include "include/Student.h"

namespace School {
            School::Student(int registration, string name, double finalGrade){
                this->registration = registration;
                this->name = name;
                this->finalGrade = finalGrade;
            }
            
            int Student::getRegistration(){
                return this->registration;
            };

            void Student::setName(string name){
                this->name = name;
            }

            string Student::getName(){
                return this->name;
            }

            void Student::setFinalGrade(double finalGrade){
                this->finalGrade = finalGrade;
            }
            
            double Student::getFinalGrade(){
                return this->finalGrade;
            }

            bool Student::status() {
                return getFinalGrade() >= 60;
            }
};
