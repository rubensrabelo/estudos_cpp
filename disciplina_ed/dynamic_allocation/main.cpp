#include<iostream>

using namespace std;

void showArray(const int *array, int sizeArray);
void fillArray(int *array, int sizeArray);

int main() {
    int *integers = new int[5];

    fillArray(integers, 5);
    showArray(integers, 5);

    delete[] integers;

    return 0;
}

void showArray(const int *array, int sizeArray) {
    cout << "[";
    for(int i = 0; i<sizeArray; i++) {
        if(i != (sizeArray - 1)){
            cout << array[i] << ", ";
        }
    }

    cout << array[sizeArray - 1] << "]" << endl;
}

void fillArray(int *array, int sizeArray) {
    for(int i = 0; i < sizeArray; i++){
        array[i] = i * 10;
    }
}