#include<iostream>

using namespace std;

struct DoisNumero{
    float num1;
    float num2;
};

int main(){
    DoisNumero numeros;

    numeros.num1 = 5;
    numeros.num2 = 6;

    cout << "Os numeros informados foram: " << numeros.num1 << " e " << numeros.num2 << endl;

    return 0;
}