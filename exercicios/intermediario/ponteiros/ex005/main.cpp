#include<iostream>

using namespace std;

void replaceValues(int* num1, int* num2);

int main(){
    int num1 = 5;
    int num2 = 7;

    cout << "-----BEFORE----- "<< endl;
    cout << "Number 01 = " << num1 << ", Number 02 = " << num2 << endl;
    
    cout << endl;

    replaceValues(&num1, &num2);
    
    cout << "------AFTER------ "<< endl;
    cout << "Number 01 = " << num1 << ", Number 02 = " << num2 << endl;

    return 0;
}

void replaceValues(int* num1, int* num2) {
    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}