#include<iostream>

using namespace std;

int main(){

    // Criando variaveis do tipo inteiro e ponteito para um inteiro
    int number = 234;
    int* ptr = nullptr;

    cout << "Valor inicial de number: " << number << endl;
    cout << "Valor inicial de ptr: " << ptr << endl;
    cout << endl;

    // Endereco de number e ptr
    cout << "Endereco de number: " << &number << endl;
    cout << "Endereco de ptr: " << &ptr << endl;
    cout << endl;

    // Colocando o endereco de number em ptr, e mudando o valor para 1456
    ptr = &number;
    *ptr = 1456;

    cout << "Valor de number apos a mudanca em ptr: " << number << endl;
    cout << "Valor de ptr " << ptr << endl;
    cout << endl;

    // Adicionando um valor de ptr em novoPtr e mudando o valor de number para 200
    int* novoPtr = nullptr;

    novoPtr = ptr;

    *novoPtr = 200;

    cout << "Valor de number apos a mudanca em novoPtr: " << number << endl;
    cout << "Endereco de novoPtr " << novoPtr << endl;
    cout << "Valor de novoPtr " << novoPtr << endl;
    cout << endl;

    return 0;
}