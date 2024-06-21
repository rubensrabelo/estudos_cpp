#include<iostream>

using namespace std;

void trocaDeNumeros(int* num1, int* num2);

int main(){
    int num1 = 5;
    int num2 = 10;

    cout << "NUMEROS ANTES DA TROCA: " << endl;
    cout << "Num_1 = " << num1 << endl;
    cout << "Num_2 = " << num2 << endl;
    cout << endl;

    trocaDeNumeros(&num1, &num2);

    cout << "NUMEROS APOS A TROCA: " << endl;
    cout << "Num_1 = " << num1 << endl;
    cout << "Num_2 = " << num2 << endl;
    cout << endl;

    return 0;
}

void trocaDeNumeros(int* num1, int* num2) {
    int aux = *num2;
    *num2 = *num1;
    *num1 = aux;
}