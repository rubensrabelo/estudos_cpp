#include<iostream>

using namespace std;

void showArray(const int *array, int sizeArray);
void burbbleSort(int *firstElement, int sizeArray);

int main() {
    int *array = new int[5];

    array[0] = 2;
    array[1] = 3;
    array[2] = 1;
    array[3] = 5;
    array[4] = 6;

    cout << "BEFORE:" << endl;
    showArray(array, 5);
    cout << endl;

    burbbleSort(array, 5);

    cout << endl;
    
    cout << "AFTER:" << endl;
    showArray(array, 5);

    delete[] array;

    return 0;
}

void showArray(const int *array, int sizeArray) {
    cout << "[";
    for(int i = 0; i < sizeArray; i++) {
        if(i != (sizeArray - 1)) cout << array[i] << ", ";
    }

    cout << array[sizeArray - 1] << "]";
}

void burbbleSort(int *array, int sizeArray) {
    for(int i = 0; i < sizeArray - 1; i++) {
        for(int j = sizeArray - 1; j > i; j--) {
            if(array[j] < array[j - 1]) {
                int aux = array[j];
                array[j] = array[j - 1];
                array[j - 1] = aux;
            }
        }
    }
}