#include<iostream>

using namespace std;

int main(){
    int size = 0;

    cout << "insert the size of the array: " << endl;
    cin >> size;

    int *pointerArr = new int[size];

    cout << endl;

    for(int i=0; i<size; i++){
        cout << "insert the " << i+1<< "a position: " << endl;
        cin >> pointerArr[i];
    }

    cout << endl;
    cout << "All the integers in the array" << endl;
    cout << endl;

    for(int i=0; i<size; i++){
        cout << i+1 << "a position" << ": "<< pointerArr[i] << endl;
    }

    delete[] pointerArr;
    
    return 0;
}