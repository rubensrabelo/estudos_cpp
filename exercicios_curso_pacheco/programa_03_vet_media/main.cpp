#include<iostream>
#include<string>

using namespace std;

int main(){
    double notas[4] {5, 5, 5, 5};
    string nome {"Lucas"};

    double media = 0;

    for(double nota : notas){
        media += nota;
    }

    media /= 4;

    cout << media << endl;

    return 0;
}