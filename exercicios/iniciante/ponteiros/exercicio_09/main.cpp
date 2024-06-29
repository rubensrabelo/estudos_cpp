#include<iostream>

using namespace std;

void sortAnArray(int *number, int qtd);
void showArray(int* const array, int qtd);

int main(){
    int numbers[] {3, 1, 6, 5, 4, 10, 9, 8, 7, 2};

    sortAnArray(numbers, 10);

    return 0;
}

void sortAnArray(int *number, int qtd) {
    int* newArray = new int[qtd];

    // Inicialize o newArray com o primeiro elemento do array original
    newArray[0] = number[0];

    for (int i = 1; i < qtd; i++) {
        int currentElement = number[i];
        int j = i - 1;

        // Desloque os elementos maiores para a direita
        while (j >= 0 && currentElement < newArray[j]) {
            newArray[j + 1] = newArray[j];
            j--;
        }

        // Insira o elemento atual na posição correta
        newArray[j + 1] = currentElement;
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