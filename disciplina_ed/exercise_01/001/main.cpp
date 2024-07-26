#include<iostream>

using namespace std;

void replaceValues(int* a, int* b);

int main() {
    int a = 5, b = 8;

    cout << "BEFORE REPLACE" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << endl;

    replaceValues(&a, &b);

    cout << "AFTER REPLACE" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

void replaceValues(int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}