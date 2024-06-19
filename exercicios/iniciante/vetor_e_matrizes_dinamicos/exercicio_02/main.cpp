#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

    int** mtr = new int*[3];

    for(int i=0; i<3; i++){
        mtr[i] = new int[3];
    }

    srand(time(nullptr));

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            mtr[i][j] = rand() % 100;
        }
    }

    cout << "Matriz gerada: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << mtr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i < 3; i++){
        delete[] mtr[i];
    }

    delete[] mtr;

    return 0;
}