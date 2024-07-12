#include<iostream>
#include<string>

using namespace std;

struct Address {
    string street;
    int number;
    string city;
    string state;
};

void showAddress(const Address address);

int main(){
    Address address;

    address.street = "Cristiano Ronaldo";
    address.number = 7;
    address.city = "Orlando";
    address.state = "Paris";

    showAddress(address);

    return 0;
}

void showAddress(const Address address) {
    cout << "----------------------------" << endl;

    cout << "Street: " << address.street << endl;
    cout << "Number: " << address.number << endl;
    cout << "City: " << address.city << endl;
    cout << "State: " << address.state << endl;


    cout << "----------------------------" << endl;
}