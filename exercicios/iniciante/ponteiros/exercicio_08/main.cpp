#include<iostream>

using namespace std;

int higherNumber(int *num1, int *num2);

int main(){
    int num1 = 50;
    int num2 = 4;

    cout << "The higher number is " << higherNumber(&num1, &num2) << endl;

    return 0;
}

int higherNumber(int *num1, int *num2) {
    if(*num1 > *num2) {
        return *num1;
    } else {
        return *num2;
    }
}