#include<iostream>

using namespace std;

void soma(int *num1, int *num2, int *soma);

int main(){
    int num1 = 5;
    int num2 = 10;
    int somaNumeros;

    soma(&num1, &num2, &somaNumeros);

    cout << "A soma eh " << somaNumeros << endl;

    return 0;
}

void soma(int *num1, int *num2, int *soma){
    *soma = *num1 + *num2;
}