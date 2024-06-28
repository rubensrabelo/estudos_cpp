#include<iostream>

using namespace std;

void sortAnArray(int *number, int qtd);
void showArray(int* const array, int qtd);

int main(){
    int numbers[] {3, 1, 6, 5, 4};

    sortAnArray(numbers, 4);

    return 0;
}

void sortAnArray(int *number, int qtd) {
    int* newArray = new int[qtd];

    for(int i = 0; i < qtd; i++) {
        if(i == 0) {
            newArray[i] = number[i];
        } else {
            // Está dando errado na comparação entre o ultimo numero, pq estou comparando com o 6
            if(number[i] < newArray[i-1]) {
                newArray[i] = newArray[i-1];
                newArray[i-1] = number[i];
            } else {
                newArray[i] = number[i];
            }
        }
    }

    showArray(newArray, qtd);

    delete[] newArray;
}

void showArray(int* const array, int qtd) {
    cout  << "[";
    for(int i = 0 ; i < qtd; i++) {
        cout << array[i];
        if(i != qtd-1) {
            cout << ", ";
        }
    }

    cout << "]" << endl;
}