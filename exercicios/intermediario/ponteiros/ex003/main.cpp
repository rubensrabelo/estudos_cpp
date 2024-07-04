#include<iostream>

using namespace std;

void reversed(int *ptr, int qtd);
void printArray(const int *ptr, int qtd);

int main(){
    int qtd = 3;
    int *intArray = new int[qtd];

    intArray[0] = 1;
    intArray[1] = 2;
    intArray[2] = 3;

    cout << "Before reversed:" << endl;
    printArray(intArray, qtd);

    reversed(intArray, qtd);

    cout << "Before reversed:" << endl;
    printArray(intArray, qtd);

    delete[] intArray;
    return 0;
}

void printArray(const int *ptr, int qtd) {
    cout << "------Array:------" << endl;
    cout << "[";
    for(int i = 0; i<qtd; i++){
        cout << ptr[i];
        if(i != qtd - 1){
            cout << ", ";
        }
    }
    cout << "]" << endl;
    cout << "------------------" << endl;
}

void reversed(int *ptr, int qtd) {
    int j = qtd - 1;
    for(int i = 0; i != j; i++){
        int aux = ptr[0];
        ptr[0] = ptr[j];
        ptr[j] = aux;
        j--;
    }
}