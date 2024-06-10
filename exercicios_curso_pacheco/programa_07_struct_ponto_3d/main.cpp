#include<iostream>

using namespace std;

struct Ponto3D{
    int x;
    int y;
    int z;
};

void desenharPonto3D(Ponto3D ponto);

int main(){
    Ponto3D ponto;
    ponto.x = 5;
    ponto.y = 5;
    ponto.z = 5;

    desenharPonto3D(ponto);

    return 0;
}

void desenharPonto3D(Ponto3D ponto){
    cout << "X: " << ponto.x << ", Y: " << ponto.y << ", Z: " << ponto.z  << endl;
}