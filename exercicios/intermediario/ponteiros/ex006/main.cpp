#include<iostream>

using namespace std;

void replacePathPointer(int** ptr1, int** ptr2);

int main(){
    int num1 = 10;
    int num2 = 20;

    int* ptr1 = nullptr;
    int* ptr2 = nullptr;

    ptr1 = &num1;
    ptr2 = &num2;

    cout << "-----BEFORE-----" << endl;
    cout << "Pointer 01 = " << ptr1 << endl;
    cout << "Pointer 02 = " << ptr2 << endl;

    cout << endl;
    replacePathPointer(&ptr1, &ptr2);

    cout << "-----AFTER-----" << endl;
    cout << "Pointer 01 = " << ptr1 << endl;
    cout << "Pointer 02 = " << ptr2 << endl;

    return 0;
}

void replacePathPointer(int** ptr1, int** ptr2) {
    int* aux = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = aux;
}