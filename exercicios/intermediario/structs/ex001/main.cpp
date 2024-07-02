#include<iostream>
#include<string>

using namespace std;

struct Person {
    string name;
    int age;
    double height;
};

void showPerson(Person person);

int main(){
    Person person1 {"Marcos", 28, 1.71};
    Person person2 {"Ana", 30, 1.55};

    cout << "Data about Person 1: " << endl;
    showPerson(person1);
    cout << endl;

    cout << "Data about Person 2: " << endl;
    showPerson(person2);
    cout << endl;

    return 0;
}

void showPerson(Person person) {
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Height: " << person.height << endl;
}