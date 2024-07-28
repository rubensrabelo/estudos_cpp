#include<iostream>

using namespace std;

void showArray(const int* ptr, int n);
void reversedArray(int* ptr, int n);

int main() {
    int array[] {2, 3, 4, 7, 5, 6};

    cout << "BEFORE: " << endl;
    
    showArray(array, 5);

    cout << endl;

    reversedArray(array, 5);

    cout << "AFTER: " << endl;
    showArray(array, 5);

    return 0;
}

void showArray(const int* ptr, int n) {
    cout << "[";

    for(int i = 0; i<n; i++) {
        if(i != n - 1) cout << ptr[i] << ", ";
    }

    cout << ptr[n-1] << "]" << endl;
}

void reversedArray(int* ptr, int n) {
    for(int i = 0, j = n - 1 ; i <= j; i++, j--) {
        int aux = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = aux;
    }
}