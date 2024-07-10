#include<iostream>

using namespace std;

int highestValue(int *arrayInt, int qtd);

int main(){
    int qtd = 5;
    int* arrayInt = new int[qtd];

    arrayInt[0] = 2;
    arrayInt[1] = 10;
    arrayInt[2] = 5;
    arrayInt[3] = 3;
    arrayInt[4] = 18;

    int highest = highestValue(arrayInt, qtd);

    cout << "The highest value is " << highest << endl;

    return 0;
}

int highestValue(int *arrayInt, int qtd) {
    int max = 0;

    for(int i = 0; i < qtd; i++) {
        if(i == 0) {
            max = arrayInt[i];
        } else {
            if(arrayInt[i] > max) {
                max = arrayInt[i];
            }
        }
    }

    return max;
}