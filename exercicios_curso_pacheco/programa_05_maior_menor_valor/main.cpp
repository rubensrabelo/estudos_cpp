#include<iostream>

using namespace std;

int main(){
    int numbers[10] {-5, 1, 2, -2, 4, 5, 6, 10, 8, 15};
    int min=0, max=0;

    for(int number : numbers) {
        if(number > max) max = number;
        if(number < min) min = number;
    }

    cout << "Minimo = " << min << endl;
    cout << "Maximo = " << max << endl;

    return 0;
}